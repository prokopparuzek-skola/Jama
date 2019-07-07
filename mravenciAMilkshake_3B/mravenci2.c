// z predchoziho programu vim te delitelnost 1-10 ma pouze cislo 1520
// proto je tento kod pouze pro toto cislo
#include<stdio.h>
int main()
{
int i,test;
for (i = 2; i <= 10; i++ ) // zkousi delit 2520 - 1(jamacoin na podlaze)
{
        if (2519 % i)
        {
            test = 1;    
        }
        else
        {
            test = 0;
            break;    
        }
}

if (test)
{
    printf("OK\n");    
}
return 0;    
}
