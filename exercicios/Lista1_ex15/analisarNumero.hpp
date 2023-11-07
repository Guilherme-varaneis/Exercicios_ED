/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   analisarNumero.hpp
 * Author: guiva
 *
 * Created on 9 de Agosto de 2023, 00:27
 */

#ifndef ANALISARNUMERO_HPP
#define ANALISARNUMERO_HPP

class analisarNumero {
public:
    analisarNumero();
    analisarNumero(const analisarNumero& orig);
    virtual ~analisarNumero();
    void lerDados();
    void parOuImpar(int);
    void positivoOuNegativo(int);
private:

};

#endif /* ANALISARNUMERO_HPP */

