# Jáma lvová  
9.ročník, zadání 2. kola 
## Úloha 4B(Nekonečná tancovačka)   
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
### zadání    

Matematici v Království zvířat uspořádali tancovačku. Na nekonečné louce si ze stejných čtvercových desek s délkou strany 1 m nasklá-
daných bez mezer k sobě postavili nekonečně mnoho čtvercových tanečních parketů tak, že pro každé přirozené číslo x (jako třeba 1, 2,
3, …) existoval právě jeden parket s délkou strany x m. Nakonec se ale matematiků sešlo jen konečně mnoho a všichni se pohodlně vešli
na parket s délkou strany n m. Ani nedohrála první písnička, a přišli – jako vždy pozdě – daňci vedení danělou Klárkou. Ti už se na parket
nevešli, a jelikož se zvířátkům nechtělo přecházet na jiný, rozhodla se nějaký jiný rozebrat na původní metrové desky a ty pak všechny
beze zbytku rozmístit kolem čtvercového parketu s délkou strany n m, na němž dosud tancovala, tak, aby se z něj stal čtverec s délkou
strany (n + 1) metrů. Po troše hledání se jim to podařilo, a tanec tak mohl vesele pokračovat.
Rozhodni, zdali n mohlo být liché. Pokud ano, nalezni alespoň jedno takové n a uveď i délku strany čtverce, který mohla zvířátka rozebrat
a použít. Pokud ne, ukaž, proč tomu tak musí být.

## řešení

Strana n nemuže být lichá.

## postup

Prvně jsem si napsal program na hledání lichých n, a když ani u velmi velkých čísel nic nenašel,
řekl jsem si, že to asi nepůjde a začal přemýšlet proč? Trochu jsem si zjednodušil počítání rozdílu
mezi (n + 1)^2 a n^2.
```
(n + 1)^2 - n^2=
(n + 1 + n) * (n + 1 - n)=
2n + 1
```
Takže pro každé n znamená, že 2n + 1 je počet čtvercových desek o straně 1m,
které budu potřebovat na zvětšení strany čtverceo 1m. Toto číslo bude vždy liché
2n dá vždy sudé + 1 liché. Pokud chci znát stranu čtverce, který musím rozebrat stačí mi 
odmocnin 2n + 1. To znamená že vždy vyjde čtverec o liché straně, protože pokud umocním na 2
liché číslo vyjde lichá odmocnina, sudé číslo vyjde sudá. A jelikož vím, že na zvětšení čtverce
potřebuji menší čtverec, protože větší by ho zvětšil, a ještě by něco zbylo, stačí zjistit o
kolik ten čtverec musí být menší. Já jsem se zamyslel a na základě příkladů, co fungují jsem došel
k závěru, že musí být menší přesně o 1, tedy strana toho čtverce měří n - 1. A z této úvahy
vyplývá, že pokud bude n liché, bude potřeba čtverec o sudé straně a tedy to fungovat nebude,
protože ten čtverec má vždy lichou stranu.

### příloha (program)
```
#include<stdio.h>
#include<math.h>
int test(unsigned int n)
{
    long double m;
    m = 2 * n + 1;
    m = sqrt(m);
    if ((m - (unsigned int)m) == 0)
        return 1;
    else
        return 0;
}
int main()
{
unsigned int i;
for (i = 1;; i += 2){
    printf("%d\n",i);
    if (test(i)){
        printf("Nalezeno %u\n",i);
        break;
    }
}
return 0;    
}
```
