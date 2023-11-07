/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   custoAoConsumidor.cpp
 * Author: guiva
 * 
 * Created on 22 de Agosto de 2023, 01:32
 */

#include "custoAoConsumidor.hpp"
#include <iostream>

using namespace std;

custoAoConsumidor::custoAoConsumidor() {
}

custoAoConsumidor::custoAoConsumidor(const custoAoConsumidor& orig) {
}

custoAoConsumidor::~custoAoConsumidor() {
}
void custoAoConsumidor::lerDados(){
    
    double custoFabrica = 0.0;
    
    cout << "Informe o custo de fábrica do carro: ";
    cin >> custoFabrica;
    int custoConsumidor = custoFabrica + this->percentDistribuidor(custoFabrica) + this->percentImpostos(custoFabrica);
    cout << "Custo do consumidor " << custoConsumidor;
    
}
double custoAoConsumidor::percentDistribuidor(double custoFabrica){
    return custoFabrica * 0.28;
}
double custoAoConsumidor::percentImpostos(double custoFabrica){
    return custoFabrica * 0.45;
}
 