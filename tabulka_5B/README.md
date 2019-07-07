# Jáma lvová  
8.ročník, zadání 1. kola 
## Úloha 5B(Tabulka)
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
###  zadání   

Úhoř Olda narazil při své plavbě po světě na zvláštní vodní nádrž. Má tvar čtverce, který je navíc rozdělený přepážkami na 16 menších
čtverečků. Přepážky je možné podplavat, nicméně aby bylo toto podplavání bezpečné, může se Olda vynořit vždy pouze o určitý počet
políček dále, navíc musí plavat pouze kolmo vzhledem k přepážkám – nemůže se tedy pohybovat po diagonálách. Olda naštěstí ví, jak to
se spodními proudy a přepážkami v každém malém čtverečku vypadá, a sestavil si proto tabulku, která celou situaci znázorňuje. Čísla v
daných čtverečcích určují, o kolik políček dále by se měl vynořit. Tedy například pro číslo 1 by se měl vynořit na jednom ze čtyř sousedních
políček dle svého výběru, pro číslo 2 musí napřed minout jedno políčko bez vynoření a vynořit se až na nějakém následujícím. Při plavbě
pod hladinou může změnit směr – například může plavat o políčko doprava a následně o políčko nahoru. Na jedno ponoření nicméně
nemůže podplavat pod jedním políčkem víckrát – pokud by chtěl podplavat pod daným čtverečkem znovu, musí se mezitím vynořit.
Na červeném políčku Olda začíná a ze zeleného políčka by měla vést cesta z nádrže pryč, tam by tedy chtěl skončit. Předtím by se ale rád
podíval na všechna ostatní políčka, jestli tam náhodou není něco k snědku. Aby políčko prozkoumal, musí se na něm vynořit, nestačí
pod ním jen proplout. Olda by rád nalezl co nejrychlejší cestu, tedy nejraději by se na každém čtverečku vynořil právě jednou. Poradíš
mu, jak taková cesta nádrží bude vypadat?

### řešení

Bohužel se mi nepodařilo najít cestu, kdy by se Olda, alespoň na jedno políčko nevrátil.
Podařilo se mi to pouze s jedním opakováním políčka. Pokusím se tedy reprezentovat toto řešení.
Úlohy jsem řešil metodou pokus-omyl. Řešení bude mít následující formát.
Budu používat souřadnice. v Levém dolním rohu je počátek.
Číslování začíná od 1. První uvádím osu x(tu vodorovnou), druhou osu y(svislou).
```
start 1;1
1   (2;1)
2   (4;1)
3   (4;3)
4   (2;3)
5   (1;2)
6   (3;1)
7   (4;2)
8   (3;4)
9   (2;2)
10  (3;3)
11  (1;3)
12  (2;4)
13  (1;4)
14  (1;3)
15  (4;4) = cíl
``` 
