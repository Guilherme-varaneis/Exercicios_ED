/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   calcNumeros.hpp
 * Author: guiva
 *
 * Created on 3 de Agosto de 2023, 16:00
 */

#ifndef CALCNUMEROS_HPP
#define CALCNUMEROS_HPP

class calcNumeros {
public:
    
    calcNumeros();
    calcNumeros(const calcNumeros& orig);
    virtual ~calcNumeros();
    void lerDados();
    int calcularR(int, int);
    int CalcularS(int, int);
    float calcExpressao(int, int);
private:

};

#endif /* CALCNUMEROS_HPP */

