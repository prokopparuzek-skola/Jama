# Jáma lvová  
8.ročník, zadání 3. kola 
## Úloha 3B(Hudebníci)   
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
###  zadání    

Hurá, sláva, v Království zvířat se koná svatba, magot Zdeněk si bere činčilu Reginu! Zdeněk už své vyvolené dokonce postavil dům: má
půdorys čtverce a uvnitř je rozdělen na 64 (= 8 × 8) stejných čtvercových místností. Zdeněk s Reginou teď přemýšlí, jak si svůj nový
domov zařídí. Oba dva jsou hudebníci – činčila hraje na činely a magot na fagot – a každý tak potřebuje svou vlastní zkušebnu. Zároveň
ale musí platit, že jejich dvě zkušebny nesmí být vedle sebe, protože jinak by se zvířátka při muzicírování rušila. Kolika způsoby můžou
Zdeněk s Reginou umístit do svého domečku dvě zkušebny tak, aby spolu nesousedily?
Místnost sousedí se všemi místnostmi, se kterými má společnou buď stěnu, nebo alespoň roh.

### řešení

Můžou si zkušebny umístit 3612 způsoby.

### postup

Nejdříve si spočítám celkový počet možných konfigurací. (64 * 63) První pokoj můžu umístit v 64 místech, druhý pouze v 63, v jednom už
je ten první.
Poté si spočítám počet sousedících konfigurací a odečtu ho od celkového počtu.
```
Počet celkových konfigurací: 
1) Mám čtyři rohová pole, můžou sousedit pouze se třemi jinými (3 * 4 = 12).
2) Mám 24 polí na straně, mohou sousedit s pěti poli (24 * 5 = 120).
3) Mám (6 * 6) 36 polí uprostřed, mohou sousedit s 8 poli (36 * 8 = 288)
```
To vše sečtu a vyjde mi 420.
Poté to odečtu od celkového počtu a vyjde mi 
```
4032 - 420 = 3612
```
