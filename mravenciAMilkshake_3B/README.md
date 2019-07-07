# Jáma lvová  
8.ročník, zadání 1. kola 
## Úloha 3B(Mravenci a milkshake)
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
###  zadání   
 
 V Království zvířátek se koná velikánská diskotéka. Hrdlička Hanka a tuleň Terka mají na starost bar, ve kterém
 se za koktejly platí Jámacoiny. Jelikož tam dělají i legendární Mšicí milkshaky, je to oblíbené místo mravenců.
 Deset z nich si dohromady naspořilo spoustu Jámacoinů a schovalo si je do trezoru u baru. Dohodli se, že je dnes
 večer utratí stejným dílem. Pokud ovšem některý z nich začne tančit, propadne jeho část Jámacoinů ostatním.
 Jeden Jámacoin se jim ale odkutálel doprostřed tanečního parketu, aniž by si toho kterýkoliv z nich všiml. A
 tak, když si přišel první mravenec vyzvednout svůj podíl, nepodařilo se mu rozdělit Jámacoiny na deset stejných
 hromádek, jak to původně mělo vycházet. Všiml si ale Jámacoinu uprostřed parketu a chtěl pro něj zajít. Jak ale
 vstoupil na plac, zachvátila ho hudba a on začal tancovat. Poté přišel druhý mravenec. Uviděl prvního, jak tančí
 na parketu, a zaradoval se. Teď si může s ostatními rozdělit Jámacoiny na devět stejných hromádek. Pokusil se
 Jámacoiny rozdělit na devět dílů, ale jeden Jámacoin mu chyběl. Najednou ho spatřil uprostřed parketu. Chtěl
 pro něj dojít, ale také jeho strhla muzika. Třetí mravenec se rozhodl objednat si pití, a tak také zašel do trezoru.
 Cestou uviděl dva tančící kamarády, zaradoval se, teď může rozdělit Jámacoiny jen na osm stejných hromádek.
 Když však rozděloval Jámacoiny spravedlivě mezi zbylé mravenčí kamarády, i jemu jeden chyběl. V tu chvíli ho
 spatřil uprostřed parketu. Vydal se pro něj, ale také jeho strhla hudba a úplně na nějaké milkshaky zapomněl. Stejný osud potkal i zbylých
 šest mravenců. Až ten poslední zjistil, že si může všechny Jámacoiny nechat, a tak si spokojeně objednal u hrdličky Hanky Mšicí milkshake
 a přemýšlel, kolik těch Jámacoinů na začátku vlastně měli. Věděl, že původně na každého mravence nepřipadalo více než 500 Jámacoinů.
 Pomůžeš mu dopátrat se, kolik měli mravenci na začátku diskotéky Jámacoinů?
 
### řešení

Pro řešení jsem si napsal 2 programy. 1 mi zjistí která čísla z 10 - 5000(počet mravenců * 500)
jsou delitelná čísly 1-10. 2 mi u jednoho čísla, které bylo vysledkem 1 programu ověří, že pokud
od něj odečtu 1, nebude dělitelné 2-10.
Vyšlo mi číslo 2520, to znamená, že na začátku diskotéky měli mravenci 2520 Jámacoinů.

Zde uvádím zdorojé kódy, v C.
#### První program
```
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
```
### Druhý program
```
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
```
