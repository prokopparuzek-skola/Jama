#include <stdio.h>
#include <stdlib.h>
#define F 'F'
#define S 'S'
#define Q 'X'
void asKing(int locX, int locY,int avSteps[][2]);
void asHyperhorse(int locX, int locY, int avSteps[][2]);
void clearAvSteps(int avSteps[][2],int lenght);
void checkMap(int map[][8],int avSteps[][2],int stepQueue[][5],int pX, int pY);
void clearstepQueue(int stepQueue[][5], int lenght);
void run(int map[][8], int stepQueue[][5], int avSteps[][2], int locX, int locY);
int checkMove(int X, int Y, int lastP, int stepQueue[][5]);
void searchRoute (int stepQueue[][5], int pozice, int map[][8]);
void printMaps(int map[][8]);
int searchK(int stepQueue[][5], int pozice);
void printMap (int map[][8], int stepQueue[][5]);
int stepQLastPos = 1, isFinish = 1;
int rounds = 0;
int main() { 
    // pole otoceno o 90° napsat do reseni!!!
    // start vlevo nahore pozice 0,0
    // pole upraveno
    int map[8][8] = {
        {S,0,Q,0,Q,0,0,0},
        {0,0,Q,0,Q,0,0,0},
        {Q,Q,Q,0,Q,0,0,0},
        {0,0,0,0,Q,0,0,Q},
        {Q,Q,Q,Q,Q,Q,0,Q},
        {0,0,0,0,Q,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,Q,Q,0,0,F},
    };
    int stepQueue[500][5];
    int i;
    int avSteps[8][2];
    clearstepQueue(stepQueue, 500);
    clearAvSteps(avSteps,8);
    // asKing(6,6,avSteps);
    // checkMap (map,avSteps,stepQueue);
    // asHyperhorse (2,1,avSteps);
    run (map, stepQueue, avSteps, 0, 0);
    searchRoute (stepQueue,stepQLastPos,map);
    return 0;    
}

// funkce ktera vrati mozne kroky kral dle pravidel na sachovnici 8 * 8
void asKing(int locX, int locY, int avSteps[][2]) {
    int count = 0, i, a;
    for (a = locX - 1; a <= locX + 1; a++) {
        for (i = locY - 1; i <= locY + 1; i++) {
            if (a != locX || i != locY) {
                // podminka vyhodnoti jestli by se kral nedostal mimo sachovnici
                if (!(a < 0 || i < 0 || a > 7 || i > 7)) {
                    avSteps[count][0] = a;
                    avSteps[count][1] = i;
                    if (count < 8) 
                        count++;   
                    else { 
                        // navratovy stav 9 = preteklo pole
                        printf("navratovy stav 9!\n");
                        exit(9);
                    }
                }
            }    
        }    
    }
}

// vrati mozne kroky hyperkone
void asHyperhorse(int locX, int locY, int avSteps[][2])
{
    int i, j = 0;
    int Jumps[4][2] = {
    { locX - 2, locY - 2},
    { locX - 2, locY + 2},
    { locX + 2, locY - 2},
    { locX + 2, locY + 2}
    };
    for (i = 0; i < 4; i++)
    {
        if (!(Jumps[i][0] < 0 ||Jumps[i][1] < 0 || Jumps[i][0] > 7 ||Jumps[i][1] > 7)) 
        {
            avSteps[j][0] = Jumps[i][0]; 
            avSteps[j][1] = Jumps[i][1]; 
            j++;
        }
    }
}

//vycisteni pole na mozne kroky
void clearAvSteps(int avSteps[][2],int lenght){
    int i;
    for(i = 0;i < lenght;i++){
          avSteps[i][0] = -1;
          avSteps[i][1] = -1;  
    }
}

// vycisti stepQueue
void clearstepQueue(int stepQueue[][5],int lenght){
    int i;
    for(i = 0;i < lenght;i++){
          stepQueue[i][0] = -1;
          stepQueue[i][1] = -1;  
          stepQueue[i][2] = -1;  
          stepQueue[i][3] = -1;
          stepQueue[i][4] = -1;
    }
}

// podle avSteps vyhodi kroky do jamy a zbyle zapise do stepQueue 
void checkMap(int map[][8],int avSteps[][2],int stepQueue[][5],int pX, int pY){
    int i;
    for(i = 0; avSteps[i][0] != -1 && i < 8 ; i++){
          if (map[avSteps[i][0]][avSteps[i][1]] != Q) 
          {
            if (checkMove(avSteps[i][0], avSteps[i][1],stepQLastPos, stepQueue)) {
                stepQueue[stepQLastPos][0] = avSteps[i][0];      
                stepQueue[stepQLastPos][1] = avSteps[i][1];      
                stepQueue[stepQLastPos][2] = stepQueue[rounds][2] + 1;
                stepQueue[stepQLastPos][3] = pX;      
                stepQueue[stepQLastPos][4] = pY;      
                if (map[avSteps[i][0]][avSteps[i][1]] == F) 
                    isFinish = 0;
                if (stepQLastPos < 500)
                    stepQLastPos++;      
                else if (stepQLastPos > 500){
                    printf("navratovy stav 9!, checkMap\n");
                    exit(9);
                }
              } 
          }
    }
}

// pousti vsechny funkce na vyhledani trasy
void run (int map[][8], int stepQueue[][5], int avSteps[][2], int locX, int locY) {
    int i;
    stepQueue[0][0] = locX;
    stepQueue[0][1] = locY;
    stepQueue[0][2] = 0;
    stepQueue[0][3] = 0;
    stepQueue[0][4] = 0;
    while (isFinish) {
        if (!(stepQueue[rounds][2] % 2))
        {
            asKing(stepQueue[rounds][0], stepQueue[rounds][1], avSteps);
        }
        else if (stepQueue[rounds][2] % 2)
        {
            asHyperhorse (stepQueue[rounds][0], stepQueue[rounds][1], avSteps);    
        }
        checkMap(map, avSteps, stepQueue,stepQueue[rounds][0], stepQueue[rounds][1]);        
        clearAvSteps(avSteps,8);
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",stepQueue[rounds][0],stepQueue[rounds][1],stepQueue[rounds][2],rounds,stepQueue[rounds][3],stepQueue[rounds][4]);
        if (rounds < 500)
        {
            rounds++;
        }
        else exit(9);
    }
    stepQLastPos--;
    printf("jsem v cili\n%d\t%d\t%d\t%d\t%d\t%d\n",stepQueue[stepQLastPos][0],stepQueue[stepQLastPos][1],stepQueue[stepQLastPos][2],stepQLastPos,stepQueue[stepQLastPos][3],stepQueue[stepQLastPos][4]);
}

// zjisti jestli kun nejde nekam kde uz byl
int checkMove(int X, int Y, int lastP, int stepQueue[][5]) {
        int i;
        for (i = lastP; i >= 0; i--) {
            if (!(stepQueue[stepQLastPos - 1][2] % 2))
            {
                if (stepQueue[i][0] == X && stepQueue[i][1] == Y && !(stepQueue[i][2] % 2))
                {
                    return 0;
                }
            }
            else if (stepQueue[stepQLastPos - 1][2] % 2)
            {
                if (stepQueue[i][0] == X && stepQueue[i][1] == Y && (stepQueue[i][2] % 2))
                {
                    return 0;    
                }
            }
        }
        return 1;
}


// najde cestu ve stepQueue (pozpatku) a zapise ji do mapy
void searchRoute (int stepQueue[][5], int pozice, int map[][8])
{
    int i;
    while (pozice)
    {
        map[stepQueue[pozice][0]][stepQueue[pozice][1]] = stepQueue[pozice][2];
        for (i = pozice; i >= 0; i--)
        {
            if (stepQueue[pozice][3] == stepQueue[i][0] && stepQueue[pozice][4] == stepQueue[i][1])
            {
                pozice = i;
                break;    
            }
        }
    }
    printMap(map, stepQueue);
}

// vypise mapu
void printMap (int map[][8], int stepQueue[][5])
{
    char *table = "|-+-+-+-+-+-+-+-|";
    int i, j, k;
    for (i = 0; i < 17; i++)
    {
        if (!(i % 2))
        {
            puts(table);    
        }
        else if (i % 2)
        {
            for (j = 0; j < 17; j++)
            {
                if (!(j % 2))
                {
                    putchar('|');    
                }
                else if (j % 2)
                {
                    switch (map[i / 2][j / 2])
                    {
                        case 0:
                            putchar(' ');
                            break;
                        case 'X':
                            putchar('X');    
                            break;
                        case 'S':
                            putchar('S');
                            break;
                        default:
                            if (!(map[i / 2][j / 2] / 10))
                            {
                                putchar(map[i / 2][j / 2] + 48);
                                break;    
                            }
                            else
                            {
                                putchar('E');
                                break;    
                            }

                    }    
                }
            }
            putchar('\n');
        }
               
    }    
}

// u funkce checkMap najde posledni vyskyt k - 1 ve stepQueue
int searchK(int stepQueue[][5], int pozice)
{
    int i;
    for (i = pozice; stepQueue[i][2] != stepQueue[pozice][2] - 1; i--);    
    return i;
}
