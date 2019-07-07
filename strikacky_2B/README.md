# Jáma lvová  
8.ročník, zadání 1. kola 
## Úloha 2B(Stříkačky)   
Prokop Parůžek, 4.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
###  zadání    

 Na poušti je sucho, a tak si musí fenek Filip a jeho 23 sourozenců nosit vodu z nedaleké artézské studny. Bohužel k  
 tomu nemají lepší pomůcky než každý jednu stříkačku ve tvaru válce o průměru 1,5 cm a výšce 6 cm. Poraď fenkům,  
 kolikrát se musí vydat ke studni, chtějí-li doma naplnit válcový kbelík o průměru 25 cm a výšce 50 cm.  
 Pro objem V válce o poloměru r a výšce h platí vzorec V = π · r2  · h, kde π je tzv. Ludolfovo číslo, která má hodnotu  
 přibližně 3,14. Odpařování vody či jakékoliv jiné ztráty po cestě zanedbej.  


### řešení

Prvně si spočítám objem kbelíku.

```
r = 5 cm = 0.05 m
h = 50 cm = 0.5 m

V = ?[m3]
V = pi * h * r2
V = 3.14 * 0.5 * 0.05^2
V = 0.003925 m3
V = 3.925 dm3 = l
```

Poté spočítám objem stříkačky  

```
r = 0.75 cm = 0.0075 m
h = 6 cm = 0.06 m

V = ?[m3]
V = pi * h * r2
V = 3.14 * 0.06 * 0.0075^2
V = 0.0000105 m3
V = 0.0105 dm3 = l
```

Vynásobím objem stříkaček 24(počet stříkaček)

```
0.0105 * 24 = 0.252
```

Následně vydělím objem kbelíku objem 24 stříkaček a získám počet, kolikrát
musí Filip se sourozenci ke studni.

```
3.925 / 0.252 = 15.575
```

Fenci musí ke studni 15 krát + 15 jich musí ke studni ještě jednou.
