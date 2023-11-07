/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   distanciaEuclidiana.cpp
 * Author: guiva
 * 
 * Created on 1 de Agosto de 2023, 11:57
 */
#include <cmath>
#include <iostream>
#include "distanciaEuclidiana.hpp"
using namespace std;
distanciaEuclidiana::distanciaEuclidiana() {
}

distanciaEuclidiana::distanciaEuclidiana(const distanciaEuclidiana& orig) {
}

distanciaEuclidiana::~distanciaEuclidiana() {
}
void distanciaEuclidiana::lerPontos(){
    int x1,x2,y1,y2;
    cout << "Digite x1: ";
    cin >> x1;
    cout << "Digite y1: ";
    cin >> y1;
    cout << "Digite x2: ";
    cin >> x2;
    cout << "digite y2: ";
    cin >> y2;
    cout<< endl;
    cout <<  "Resultado: " << this->calcularDE(x1,x2,y1,y2);
    
    
}
float distanciaEuclidiana::calcularDE(int x1, int x2, int y1, int y2){
    //raiz quadrada = sqrt()
    //Expoente = pow = (x,2)
    
    float d = 0.0;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));
    return d;
}
