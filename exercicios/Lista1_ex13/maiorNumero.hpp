/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   maiorNumero.hpp
 * Author: guiva
 *
 * Created on 8 de Agosto de 2023, 19:15
 */

#ifndef MAIORNUMERO_HPP
#define MAIORNUMERO_HPP

class maiorNumero {
public:
    maiorNumero();
    maiorNumero(const maiorNumero& orig);
    virtual ~maiorNumero();
    void lerDados();
    int verificaMaiorNumero(int, int, int);
    
private:

};

#endif /* MAIORNUMERO_HPP */

