/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   notasPonderadas.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 01:47
 */

#include "notasPonderadas.hpp"
#include <iostream>

using namespace std;

notasPonderadas::notasPonderadas() {
}

notasPonderadas::notasPonderadas(const notasPonderadas& orig) {
}

notasPonderadas::~notasPonderadas() {
}
void notasPonderadas::lerDados(){
    float nota1, nota2, nota3;
    cout << "nota 1: ";
    cin >> nota1;
    cout << "nota 2: ";
    cin >> nota2;
    cout << "nota 3: ";
    cin >> nota3;
    
    float mediaFinal = this->notaFinal(nota1, nota2, nota3);
    
    cout << "Sua Média Final é: " << mediaFinal;
}
float notasPonderadas::notaFinal(float nota1, float nota2, float nota3){
    
    return (nota1 * 2 + nota2 * 3 + nota3 * 5)/10;
}
