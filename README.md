# SO2-Projekt

Pionki na macierzy 

Zasoby:

KOLEJKA1 - pierwsza kolejka liczb
KOLEJKA2 - druga kolejka liczb
MACIERZ - macierz rozmiaru MxN przechowujaca pionki.
Watki:

Producent - watek ktory w jednej iteracji dodaje losowa liczbe z zakresu (0..M-1) do kolejki ZRODLO1 oraz inna losowa liczbe z zakresu (0..N-1) do kolejki ZRODLO2
Parser - watek ktory w jednej iteracji pobiera (o ile istnieje) jedna wspolrzedna z kolejki ZRODLO1 oraz druga wspolrzedna z kolejki ZRODLO2, generuje pionek i wstawia go do macierzy MACIERZ. Dodatkowo, watek ten w kazdej iteracji przesuwa kazdy pionek umiejscowiony na planszy o jedna pozycje w bok
Ncurses - watek ktory co sekunde uzyskuje dostep do macierzy MACIERZ i wyswietla na ekranie jej stan (rozmieszczenie pionkow) przy uzyciu biblioteki ncurses