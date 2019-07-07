# Jáma lvová  
8.ročník, zadání 2. kola  
## Úloha 4B(Loď)  
Prokop Parůžek, 3.A, Gymnázium Teplice  
prokop.paruzek (at) paruzkovi.cz  
adresa úlohy: [https://github.com/prokopparuzek/lod_4B](https://github.com/prokopparuzek/lod_4B)  
### zadání  

V Království zvířat se rozšířila nová móda – stavění hranolovitých lodí. Mezi nejlepší stavitele patří dikobraz Az-kar-min An-yl-in, který
své lodě buduje z jasanového dřeva o hustotě 620 kg/m3
z prken silných 20 cm (výsledná loď má tedy stěny tlusté 20 cm). Jeho kamarád
lišák Lukáš si u něj objednal loď, která má šířku 300 loktů, délku 50 loktů a výšku 30 loktů (1 loket měří 0,45 m, jedná se o vnější rozměry).
Ještě před vyplutím by ale chtěl vědět, kolik jeho nová loď unese zátěže, aby věděl, kolik kamarádů může pozvat na večírek. Mezi jeho
kamarády patří: slon Samuel (váží 1 t), žirafa Ziva (900 kg), hroch Haniel (3 t), orangutan Ozeáš (90 kg), nosorožec Nathaniel (3,6 t),
medvěd Michael (250 kg), jelen Jeremiáš (300 kg), varanka Varda (166 kg), datel Daniel (370 g), tygr Teofilus (300 kg), lvice Lea (250 kg)
a krokodýl Kornel (1,2 t). Které kamarády může Lukáš pozvat, jestliže on sám váží 8 kg a ve vyhlášce o bezpečnostních předpisech lodní
dopravy Království zvířat stojí, že loď by měla při plavbě čnít nad vodu alespoň o 20 cm?
Lukášova loď nemá střechu, skládá se tedy pouze ze dna a čtyř svislých stěn. Lukáš se bude s lodí plavit především po jezeře Tarara, v němž
je průměrná hustota vody 1 g/cm3.

### řešení  

Jako první se přepočítám jednotky.
```
šířka: 300 loktů = 135 m
délka: 50 loktů = 22,5 m
výška: 30 loktů = 13,5 m
```

Dále si spočítám objem ponořené částí lodi (výška - 20 cm).

```
V = 135 * 22,5 * 13,3
V = 40 389,75 m3
```

Pomocí Archimedova zákona spočítám sílu, která loď nadlehčuje.

```
F = V * (hustota, vody) * g(gravitační zrychlení)
F = 40 398,75 * 1000(1 g/cm3 = 1000 kg/m3) * 10
F = 403 987 500 N
```

To znamená, že loď je nadlehčována silou 403 987 500 N to odpovídá 40 398 750 kg(N = 0,1 kg).
Od tohoto odečtu hmotnost trupu a vyjde mi nosnost lodi.

objem trupu

```
V = (boční stěny) + (2boční stěny - kusy které překrývají prví boční stěny) + (dno - to co zakrývají boční stěny)
V = 2(135 * 13,5 * 0,20) + 2(22,1 * 13,5 * 0,20) + (134,6 * 22,1 * 0,20)
V = 1 443,3 m3
```

Váhu trupu získám vynásobením objemu hustotou.  

```
m = (hustota trupu, jasanové dřevo) * V
m = 620 * 1 443,3
m = 894 846 kg
```

Teď odečtu od vztlakové síly hmotnost trupu a získám nosnost.

```
40 398 750 - 894 846 = 39 503 904 kg
```

Nosnost je tedy 39 503 904 kg

A jelikož hmotnost všech lišáka a všech jeho kamarádů je 11 064,37 kg, může si všechny pozvat klidně třikrát.
