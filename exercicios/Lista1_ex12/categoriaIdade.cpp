/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   categoriaIdade.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 18:46
 */

#include "categoriaIdade.hpp"
#include <iostream>

using namespace std;

categoriaIdade::categoriaIdade() {
}

categoriaIdade::categoriaIdade(const categoriaIdade& orig) {
}

categoriaIdade::~categoriaIdade() {
}
void categoriaIdade::lerDados(){
    int idade;
    cout << "insira sua idade para exibir sua categoria: ";
    cin >> idade;
    this->categoria(idade);
    
    
}
void categoriaIdade::categoria(int idade){
    if(idade > 5 && idade < 7 ){
        cout << "INFANTIL 'A'\n";
    }else 
        if(idade >= 8 && idade <= 10 ){
        cout << "INFANTIL 'B'\n";
    }else 
        if(idade >= 11 && idade <= 13 ){
        cout << "JUVENIL 'A'\n";
    }else 
        if(idade >= 14 && idade <= 17 ){
        cout << "JUVENIL 'B'\n";
    }else 
        if(idade >= 18){
        cout << "ADULTO";
    }else{
        cout << "Sua idade não se encaixa em nenhuma categoria";
    }
}

