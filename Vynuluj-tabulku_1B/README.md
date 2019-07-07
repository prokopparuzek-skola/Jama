# Jáma lvová  
9.ročník, zadání 2. kola 
## Úloha 1B(Vynuluj tabulku)   
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
### zadání    

Surikaty Saša a Nataša si krátí čekání na Ježíška tím, že si dávají hádanky. Zrovna teď Saša nakreslil na papír tabulku o velikosti 3 × 3
políčka vyplněnou přirozenými čísly (viz obrázek 6) a řekl Nataše: „Můžeš provádět dvě operace: Buď si vybereš nějaký řádek tabulky
a všechna čísla v něm vynásobíš dvěma, anebo si vybereš nějaký sloupec a ode všech čísel v něm odečteš jedničku. Tvým úkolem je získat
ve všech políčkách číslo 0. Dokážeš to?“
A co Ty, dokážeš vynulovat Sašovu tabulku?

### řešení

Ano.  
Pro vysvětlení postupu řešení si označme tabulku souřadnicemi. Počátek bude v levém horním rohu.
sloupce označme 1 2 3, řádky A B C. Asi nějak takto.

```
X|1|2|3|    X|1|2|3|    
--------    --------    
A|1|2|1|    A|2|4|2|    
-+-+-+-+    -+-+-+-+    
B|2|3|2|    B|2|3|2|    
-+-+-+-+    -+-+-+-+    
C|1|2|1|    C|2|4|2|    
-+-+-+-+    -+-+-+-+    
```
```
X|1|2|3|    X|1|2|3|
--------    --------
A|0|2|0|    A|0|2|0|
-+-+-+-+    -+-+-+-+
B|0|1|0|    B|0|2|0|
-+-+-+-+    -+-+-+-+
C|0|2|0|    C|0|2|0|
-+-+-+-+    -+-+-+-+
```
Teď uvedu posloupnost znaků, každý znak označuje operaci dle zadání buď s řádkem nebo se sloupcem.
Po provedení všech operací by měla být tabulka vynulovaná.
```
AC113322B22
```

### postup

Potřebuji dostat v každém sloupci stejná čísla, abych je mohl odečíst po 1.
Vynásobím proto 1. a 3. řádek 2 abych dostal v 1. a 3. sloupci stejná čísla(2).
Pak je odečtu. Poté 2krát odečtu 2. sloupec abych dostal kombinaci 2 1 2.
Vynásobím 2 řádek (2 * 0 = 0) a odečtu. Hotovo.
