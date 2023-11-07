/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   converterIdade.cpp
 * Author: guiva
 * 
 * Created on 4 de Agosto de 2023, 19:19
 */

#include "converterIdade.hpp"
#include <iostream>

using namespace std;

converterIdade::converterIdade() {
}

converterIdade::converterIdade(const converterIdade& orig) {
}

converterIdade::~converterIdade() {
}
void converterIdade::lerDados(){
    int anos, meses, dias;
    
        cout << "Especifique sua idade em anos, meses e dias" << endl;
        cout << "Anos: ";
        cin >> anos;
        cout << "Meses: ";
        cin >> meses;
        cout << "Dias: ";
        cin >> dias;
        
        int a = this->converterAnosEmDias(anos);
        int m = this->converterMesesEmDias(meses);
        int d = this->mostraDias(dias);
        int totalDias = a+m+d;
        
        cout << "Sua idade convertida somente em dias é: " << totalDias << " dias.";
    
}
int converterIdade::converterAnosEmDias(int anos){
    int conversaoAnos;
    
    return conversaoAnos = 365 * anos;
    
}
int converterIdade::converterMesesEmDias(int meses){
    int conversaoMeses;
    
    return conversaoMeses = 30 * meses;
    
    
    
    
}
int converterIdade::mostraDias(int dias){;;
    return dias;
}

