# Jáma lvová  
8.ročník, zadání 1. kola 
## Úloha 4B(V jámě lvové)   
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
###  zadání    

 V jámě žije lev. Už dlouho nejedl, a tak je hladový. Hodně hladový.
 Z každé strany nyní k jámě přišel jeden poutník. Oba dva se chtějí dostat na druhou stranu a oba dva s sebou shodou okolností mají
 dostatečně dlouhý žebřík. Rozhodli se tedy, že žebříky opřou o dno jámy proti sobě tak, aby se uprostřed dotýkaly (viz obrázek 4), a
 přelezou po nich na druhou stranu, aniž by museli sestoupit na dno jámy. Přece jen v nich ale hlodají pochybnosti – je místo, kde se
 žebříky setkají, dostatečně vysoko? Vědí, že na jedné straně je jáma hluboká 10 m a na druhé 6 m a že hladový lev může vyskočit až 5 m
 vysoko. Je za těchto okolností bezpečné pokoušet se jámu po žebřících překonat, anebo mají poutníci raději hledat jiný způsob?
 Úlohu můžeš vyřešit i tak, že si situaci narýsuješ a výšku změříš, za takové řešení ale dostaneš jenom část bodů.


### řešení

 Odpovědí je, že poutníci by měli hledat jiný způsob přechodu rokle, protože žebříky se kříží
příliš nízko, pokusím se vysvětlit proč a jak jsem k tomu došel.
 Prvně jsem si myslel, že z údajů, které mám půjde spočítat šířka jámy. Asi to nejde.
Proto jsem si situaci narýsoval a zjistil, že pro všechny šířky jámy jsou žebříky stejně vysoko
cca. 3,8 m nad zemí, lev tedy poutníky sežere.
 Teď se pousím matematicky a bez použití rýsování vysvětlit proč to tak je.
Řešení jsem založil na dvou rovnicích o dvou neznámých a funkci tangens. Pokusím se ho vysvětlit.
Prvně popis obrázku.
Stěnu vysokou 10 m si označme a.
Stěnu vysokou 6 m si označme b.
Šířku jámy si označme c.
Toto jsou hodnoty, které znám, šířku jámy zkouším, a tedy si jí určím.
př. chci vyzkoušet jak vysoko bude žebřík, pokud je šířka jámy 10 m; c = 10.
x si označme výšku setkání žebříků nad zemí
y si označme úsečku, ,kerá leží na "dně jámy" mezi 10 m vysokou stěnou a kolmicí k bodu setkání žebříků
od "dna jámy".

Teď můžeme sestavit 2 rovnice o dvou neznámých.

```
pro c = 10
y = x/6/10
10 - y = x/10/10
```
Rovnice vyřešíme a vyjde nám.
```
x = 3,75
y = 6,25
```
Co nás zajímá je x to je výška setkání žebříků nad zemí, tedy 3,75 m je jasné, že putníci nemají šanci.
Zhruba nám to i odpovídá výšce naměřené u rýsování.
Teď se to pokusím vysvětlit. Vím, že délka y je stejná jako
x/tan(úhel mezi dnem a žebříkem od kratší strany)
Pokusím se vysvětlit, jak jsem na to přišel.
```
a je označení pro uhel popsaný výše
tan(a) = b/c
```
Pokud znám u pravoúhlého trojúhelníku jednu stranu a úhle, či jeho tangens rozdílný od pravého úhlu můžu
další stranu dopočítat.
```
tan(a) = x/y
tan(a) * y = x
y = x / tan(a)
```
Pro druhou rovnici je to to samé, jenom počítám s jiným úhlem a
délka podstavy druhého trojúhelníku("na dně jámy") je stejná jako c - y.
Snad jsem obsáhl dobře.

No, a pokud do této soustavy rovnic dosadíme jakékoli c,
vždy nám vyjde x rovno 3,75, toť můj matematický důkaz, že to nejde.
