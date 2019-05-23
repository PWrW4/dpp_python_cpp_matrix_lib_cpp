#include "library.h"

#include <iostream>

int calc_power(int x, int y) {
    int wynik = 1;

    for (int i = 0; i<y; i++)
        wynik*=x;

    return wynik;
}