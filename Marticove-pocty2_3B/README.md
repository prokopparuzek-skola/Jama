# Jáma lvová
8.ročník, zadání 2. kola

Prokop Parůžek, 3.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
adresa úlohy: [https://github.com/prokopparuzek/Marticove-pocty2_3B](https://github.com/prokopparuzek/Marticove-pocty2_3B) 

## Úloha 3B(Marticové počty 2)

### zadání  

Při zkoumání marticového násobení (viz úloha 4B z předchozího kola) přišli zvířecí matematici na hroznou věc: Marticové násobení není
komutativní! Zatímco pro obyčejné násobení čísel platí x · y = y · x pro každá dvě čísla x a y (např. 2·5 = 5·2), pro marticové násobení to
neplatí! To jsou věci… V matematických kruzích se okamžitě rozproudila živá debata o tom, zda existují nějaké dvě martice M, N takové,
že je pro ně marticové násobení komutativní, tedy že platí M · N = N · M. Dokážeš jim poradit?

### řešeni  

Martice M a N pro které platí komutativní násobení existují. Jsou to Martice o rozměrech 2 * 2,
které jsou čísly na obě úhlopříčky souměrné.
př.

```
2|7  *  3|4
7|2     4|3 
```

Toto dá vždy stejný výsledek protože ať martice čteme zprava-doleva, či zhora dolů pokaždé přečteme to samé.

Platí to též pro martice kde jsou všechna čísla stejná o libovolných rozměrech.

Platí i pro martice o vzoru:

```
a|b|c  
b|c|b  
c|b|a  
```

To jest ty které mají na diagonálách stejná čísla, s tím že čísla se opakují `1. diagonála 'a'; 2. 'b'; 3 'c'; 4 '̈́b' a 5. '̈́a'.`

Platí to i pro bodobné martice a to pro ty které vypadají jako Vigenerův čtverec, to jest máme nějakou "abecedu" a tu píšeme do řádků
s tím že ji vždycky o jednu posuneme a první písmeno přidáme na konec.

př.

```
a|b|c  
b|c|a  
c|a|b  
```
