# Jáma lvová
8.ročník, zadání 2. kola

Prokop Parůžek, 3.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
adresa úlohy: [https://github.com/prokopparuzek/hyperkun_2B](https://github.com/prokopparuzek/hyperkun_2B)  

## Úloha 2B(Hyperkůň)

### zadání

Po své poslední eskapádě byl Hyperkůň vhozen do žalářního bludiště a pochroumal si u toho levé zadní kopýtko. Bludiště vypadá jako
velká šachovnice, jen na některých políčkách zeje místo podlahy bezedná jáma (na obrázku 5, vyznačeno černě). Brrr, tam by tedy nechtěl
spadnout. Král Hyperkoni naštěstí ve své veliké moudrosti slíbil udělit milost, pokud se mu povede ze žaláře dostat. Za normálních
okolností by Hyperkůň přeskákal ze svého místa rovnou ke schodům ven (na obrázku 5 jsou vyznačeny zeleně), kvůli zraněné noze ale
musí být opatrný. Každý lichý (tedy i ten první) skok může skočit jen o jedno pole libovolným směrem (tedy jako šachový král), a pouze
v sudých skocích může skákat jako správný Hyperkůň o 2 pole jedním směrem a 2 pole stranou (viz úloha 2B z předchozího kola). Jak se
teď dostane ven, když to levou zadní nepůjde? Dokážeš Hyperkoni poradit nejkratší cestu ven?


![Hyperkun sachovnice](./images/sachovnice_hyperkun.png)


### řešení

#### postup

Pro řešení jsem zvolil algoritmus šíření do šířky [(http://www.itnetwork.cz/algoritmy/bludiste/algoritmus-sireni-do-sirky-vlna-hledani-cesty-v-bludisti)] (http://www.itnetwork.cz/algoritmy/bludiste/algoritmus-sireni-do-sirky-vlna-hledani-cesty-v-bludisti).
Algoritmus jsem si upravil tak, aby kůň chodil podle zadání.

Protože se momentálně učím jazyk C, chtěl jsem vyzkoušet co jsem se dosud naučil a vyřešit tuto úlohu pomocí programu.
Aby se mi s bludeštěm lépe pracovalo jako s polem, otočil jsem si ho o 90°.

#### závěr
```
|-+-+-+-+-+-+-+-|  
|S|1|X| |X| | | |  
|-+-+-+-+-+-+-+-|  
| | |X|3|X| | | |  
|-+-+-+-+-+-+-+-|  
|X|X|X|2|X| | | |  
|-+-+-+-+-+-+-+-|  
| | | | |X|4| |X|  
|-+-+-+-+-+-+-+-|  
|X|X|X|X|X|X|5|X|  
|-+-+-+-+-+-+-+-|  
| | | | |X|7| | |  
|-+-+-+-+-+-+-+-|  
| | | | |6| | | |  
|-+-+-+-+-+-+-+-|  
| | | |X|X| | |8|  
|-+-+-+-+-+-+-+-|  
```

Hyperkůň se ven dostane během 8 tahů.

