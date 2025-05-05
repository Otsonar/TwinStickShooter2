Projekti tehty UE versiossa 5.4.4

Seurasin projektia tehdessä koko tutorial soittolistan läpi. Sen jälkeen tein "main menun" sekä "game over" ruudun. En omista ohjainta,
jonka takia en voinut testata toimiiko peli sillä. Näppäimistöä käyttäen hahmo liikkuu WASD näppäimillä ja ampuu eri suuntiin nuolinäppäimillä.

En tehnyt toista tasoa, mutta pelin vaikeustaso nousee jatkuvasti mitä pidemmälle selviät. Haastavuuden lisäys perustuu vihollisten 
maksimimäärään kentällä, joka nousee aina yhdellä per 10 pistettä. Pelin voittaa saatuaan 500 pistettä. Vihollisia alkaa tulemaan niin
paljon, että tein toisen version aseen ammuksesta, joka on suora päivitys alkuperäisestä. Päivitetyllä ammuksella on isompi hitbox,
joka mahdollistaa osuman useampaan viholliseen ja sen aiheuttamaa vahinkoa on nostettu huomattavasti. Alkuperäisen ammuksen 4 osuman
sijaan päivitetty ammus vaatii vain 2 osumaa. Päivitetyt ammukset tulevat käyttöön 200:sta pisteestä lähtien.
Viholliset tekevät vahinkoa pelaajaan nopeammin, kuin tutorialin esimerkki. Tämä pakottaa pelaajan jatkuvasti liikkumaan ja piiritetyksi tuleminen johtaa lähes takuulla kuolemaan.

Projektin tekeminen alkoi sujumaan hyvin, kun blueprint systeemin käyttö alkoi käymään tutummaksi. Yleisesti ottaen koen Unrealin olevan
paljon monimutkaisempi, kuin Unity. Lisätty monimutkaisuus antaa kehittäjälle kuitenkin paljon laajemman määrän valintoja. Jälkeenpäin
tajusin, että "game over" ruutu olisi ollut hyvä tehdä täysin eri blueprinttiin yleisen HUD:in sijaan.
