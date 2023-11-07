/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cardapioLancheria.cpp
 * Author: guiva
 * 
 * Created on 9 de Agosto de 2023, 00:46
 */

#include "cardapioLancheria.hpp"
#include <iostream>
#include <iomanip>


using namespace std;

cardapioLancheria::cardapioLancheria() {
}

cardapioLancheria::cardapioLancheria(const cardapioLancheria& orig) {
}

cardapioLancheria::~cardapioLancheria() {
}

void cardapioLancheria::menuLancheria() {
    cout << " |------------------------------------| \n"
            " | ESPECIFICACÃO     | CÓDIGO | PREÇO | \n"
            " | CACHORRO-QUENTE   |  100   | 1,20  | \n"
            " | BAURU SIMPLES     |  101   | 1,30  | \n"
            " | BAURU COM OVO     |  102   | 1,50  | \n"
            " | HAMBÚRGUER        |  103   | 1,20  | \n"
            " | CHEESEBURGUER     |  104   | 1,30  | \n"
            " | REFRIGERANTE      |  105   | 1,00  | \n"
            " |------------------------------------| \n";
}

void cardapioLancheria::lerDados() {
    int codProd;
    double total = 0.0;
    int quantidade;
    while (true) {
        this->menuLancheria();
        cout << "Insira o Código do produto(-1 para encerrar compras): ";
        cin >> codProd;
        if (codProd == -1) {
            cout << "Encerrando... \n";
          
            break;
        }
        double preco= this->precoLanches(codProd);
       
        
        cout << "Insira a quantidade do produto: ";
        cin >> quantidade;
        
        this->realizarPedido(preco, quantidade, total);
        
}
     cout << "Total: " << fixed << setprecision(2) << total << endl;
}

double cardapioLancheria::precoLanches(int codProd){
    double preco;
     switch (codProd) {
        case 100:
            preco = 1.20;
            break;
        case 101:
             preco = 1.30;
            break;
        case 102: 
             preco = 1.50;
            break;
        case  103:
             preco = 1.20;
            break;
        case 104:
             preco = 1.30;
        case 105:
             preco = 1.00;
            break;
        default:
             preco = 0.0;
            break;
}
     return preco;
}
void cardapioLancheria::realizarPedido(double preco, int quantidade, double &total){
     if (preco>0){
            
            double subtotal = preco * quantidade;
            
            total += subtotal;
            
            cout << "Você pediu " << quantidade << "x Desse item. " << "subtotal: " << subtotal << endl << endl;
        }else{
            cout << "Código de item inválido" << endl << endl;
        }
}
