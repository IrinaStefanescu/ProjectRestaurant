﻿/*Restaurant: La un restaurant exista mai multe mese. La fiecare masa se pot aseza 1 sau mai
multi clienti (maxim in functie de capacitatea mesei). Clientii sosesc in grupuri si se aseaza la
o masa suficient de mare. Apoi comanda din meniul care contine mai multe feluri de
mancare si bauturi fiecare avand un pret. Fiecare client comanda pentru el. Dupa ce
mananca parasesc masa (eventual pe rand). Cand un client paraseste masa el doreste nota
de plata pentru ce a consumat el. La final se elibereaza nota de plata pentru clientii ramasi.
Scrieti un program care sa permita aceste operatiuni.
Precizari:
 Feluri de mancare pot fi cel putin: Ciorba – de burta, de legume (ambele cu sau
fara smantana si eventual ardei) si de ciuperci; Fel principal – de pui (Frigarui sau
Tocana) sau de vita (Chateaubriand – precizat cat de bine facut sa fie, stroganoff
sau file – la 100g), Garnitura (doar la fel principal) – cartofi (prajiti sau piure) sau
orez sarbesc si Desert – Inghetata la cupa (intre 3 si 5 cupe) sau tort krantz.
 Suplimentar exista bauturi: Vin varsat (rosu sau alb) – la 100ml, Sticle de vin
(Bordeux din 1996 sau Castel Bolovanu 2004), Sticle de bere (cu/fara alcool) sau
apa plata (la sticla).
 Interactiunea cu chelnerul se desfasoara sub forma unui dialog in care aceasta
afla progresiv dorintele clientului (e.g. De baut va aduc ceva? Da. Vin, bere sau
apa? Vin. La pahar sau la sticla? La pahar. Cati ml? 200ml. Multumesc; doriti
ciorba? Da. De care? De legume. Cu sau fara smantana? Cu. Cu sau fara Ardei?
Fara. Fel principal doriti? Nu. Desert doriti? Da. Inghetata sau tort kranz?
Inghetata. Cate cupe? 4).
 Chelnerul intreaba pe rand fiecare persoana de la masa ce doreste.
 Chelnerul poate fi chemat de un client la o masa si poate sa i se ceara Nota
individuala sau nota colectiva (a tuturor clientilor ramasi la masa).*/
#include "Manager.h"
#include <iostream>

int main()
{
	Manager* man = new Manager();
	man->addPersoane();
	man->printDetalii();
	man->iaComanda();

	return 0;
}
