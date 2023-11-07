/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: guiva
 *
 * Created on 8 de Setembro de 2023, 11:06
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j;
    int vetor [10] = {8, 10, 15, 13, 16, 1, 4,2,6,3};
    int aux;  


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (vetor[j] < vetor[j + 1]) {
                 aux = vetor[j];
                 vetor[j] = vetor[j+1];
                 vetor[j+1] = aux;
            }
        }
    }
    for(j = 0; j<6; j++){
        cout << vetor[j] << " | ";
    }

    return 0;
}

