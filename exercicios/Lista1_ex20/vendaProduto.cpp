/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */





/* 
 * File:   vendaProduto.cpp
 * Author: guiva
 * 
 * Created on 12 de Agosto de 2023, 14:17
 */

#include "vendaProduto.hpp"
#include <iostream>

using namespace std;

vendaProduto::vendaProduto() {
}

vendaProduto::vendaProduto(const vendaProduto& orig) {
}

vendaProduto::~vendaProduto() {
}
void vendaProduto::cabecalho(){
     cout << " |------------------| \n"
            " |  CÓDIGO  | PREÇO | \n"
            " |   1001   | 5,32  | \n"
            " |   1324   | 6,45  | \n"
            " |   6548   | 2,37  | \n"
            " |   0987   | 5,32  | \n"
            " |   7623   | 6,45  | \n"
            " |------------------| \n";
}

void vendaProduto::lerDados() {
    int codigo;
    int quantidade;
    double total = 0.0;
    this->cabecalho();
   
    while (true) {
        cout << "Selecione o código do produto para compra(-1 para encerrar): ";
        cin >> codigo;
        if (codigo == -1) {
            cout << "Encerrando..." << endl;
            break;
        }
    cout << "Digite a quantidade: ";
    cin >> quantidade;

    }
   
    float preco = this->precoProduto(codigo);
    cout << "Valor total: " << total;

}

double vendaProduto::precoProduto(int codigo) {
    double preco;
   
            if (codigo == 1001) {
                preco = 6.52;
            } else
                if (codigo == 1324) {

                preco = 6.45;
            } else
                if (codigo == 6548) {
                preco = 2.37;
            } else
                if (codigo == 9870) {
                preco = 6.32;
            } else
                if (codigo == 7623) {
                preco = 6.45;
            } else {
                preco = 0.00;
            }
    
    return preco;
}

void vendaProduto::realizarVenda(double preco, int quantidade, float &total) {
    if (preco > 0) {
        float total = 0.0;
        total = preco * quantidade;
        cout << "Você pediu " << quantidade << "x deste produto.";
    } else {
        cout << "código de item inválido.";
    }
}


