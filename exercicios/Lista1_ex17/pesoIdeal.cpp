/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   pesoIdeal.cpp
 * Author: guiva
 * 
 * Created on 10 de Agosto de 2023, 00:05
 */

#include "pesoIdeal.hpp"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

pesoIdeal::pesoIdeal() {
}

pesoIdeal::pesoIdeal(const pesoIdeal& orig) {
}

pesoIdeal::~pesoIdeal() {
}
void pesoIdeal::lerDados(){
    float altura;
    char sexo;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << " 'm' ou 'M' - para MASCULINO\n"
            " 'f' ou 'F' para FEMININO: ";
    cin >> sexo;
    this->pesoFinal(sexo, altura);
    
}
void pesoIdeal::pesoFinal(char sexo, float &altura){
    float peso;
     if(sexo == 'M' || sexo == 'm'){
        peso = this->calculaPesoIdealHomem(altura);
    }else if(sexo == 'F' || sexo == 'f'){
        peso = this->calculaPesoIdealMulher(altura);
    }else{
        cout << "Selecione somente as letras correspondentes" << endl;
    }
    cout << "Seu peso ideal é " << peso << "Kg";
}
float pesoIdeal::calculaPesoIdealHomem(float &altura){
    return (72.7*altura)-58;
}
float pesoIdeal::calculaPesoIdealMulher(float &altura){
    return (62.1*altura)-44.7;
}