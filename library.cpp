#include "library.h"

#include <iostream>

__declspec(dllexport) float ** calc_power(float ** A, float ** B, int size) {
    float ** C = new float*[size];

    for (int l = 0; l < size; ++l) {
        C[l] = new float[size];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    return C;
}