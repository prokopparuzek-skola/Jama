#include<stdio.h>
int main()
{
int i, j, test = 0;
for (i = 1; i <= 5000; i++) // projede vsechna cisla od 1 do 5000 mozny pocet jamacoinu
{
    for (j = 1; j <= 10; j++) // zkusi jamacoiny vydelit 1-10
    {
            if (i % j) // kdyz to nejde
            {
                test = 0;
                break;    
            }
            else // kdyz je lze vydelit
            {
                test = 1;    
            }
    }
    if (test) printf("%d\n",i);
}
return 0;    
}
