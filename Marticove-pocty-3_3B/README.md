# Jáma lvová 
8.ročník, zadání 2. kola  
## Úloha 3B(Marticové počty 3)  
Prokop Parůžek, 3.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
adresa úlohy: [https://github.com/prokopparuzek/Marticove-pocty-3_3B](https://github.com/prokopparuzek/Marticove-pocty-3_3B)  
### zadání  

Díky vaší pomoci již zvířecí matematikové vědí, jak vypadá marticová jednička (viz úloha 4B z 1. kola),
i to, že marticové násobení sice obecně není komutativní, ale lze najít dvojice martic, pro které
komutativita násobení platí (viz úloha 3B z 2. kola). Většina matematiků již začíná věřit, že martice
by mohly být k něčemu dobré, a mrož Pavel se dokonce rozhodl, že je využije ve své vědecké práci.
Všechno šlo jako po másle až do té chvíle, kdy Pavel v jednom z matematických důkazů zjistil, že by
z martic potřeboval umět získat pouze první řádek, případně první sloupec. Jinými slovy, potřeboval
by umět nalézt takové martice S a R, pro které platí, že pokud vynásobíme martici S s libovolnou
jinou marticí M, získáme jako výsledek nezměněný první sloupec M, a pokud vynásobíme martici R
s libovolnou jinou marticí M, získáme jako výsledek nezměněný první řádek martice M. Z martice
M= 
```
1 2  
3 4
```
tak chceme jako výsledek získat martice MS =  
```
1  
3  
```
, resp. MR = ```1 2 ```.
Dokážeš Pavlovi poradit, jak martice S a R vypadají?
Vzhledem k tomu, že spolu můžeme násobit jen martice určitých rozměrů, může (podobně jako u marticové jedničky) platit, že existuje
celá skupina takových martic S a R, z nichž všechny vypadají podobně, ale mají různé rozměry. Nezapomeň, že marticové násobení není
komutativní a záleží tedy na tom, v jakém pořadí martice vynásobíš!

### řešení 

U martice R ,která vypadá takto ```1|0```(stejný počet nul jako sloupců druhé martice, 
pokud má martice M jenom jeden sloupec martice R vypadá takto ```|1|```) 
platí, že pokud ji vynásobím libovolnou marticí M (R * M) získáme její první řádek.

U martice S ,která vypadá stejě jako martice R otočená o 90° tedy takto  
```
1  
0  
```
(stejně jako u martice S počet nul je stejný jako počet řádků martice M, či pouze 1),
ale pokud násobíme musíme martici M vynásobit marticí S (M * S).
