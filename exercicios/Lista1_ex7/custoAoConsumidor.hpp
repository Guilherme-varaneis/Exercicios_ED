/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   custoAoConsumidor.hpp
 * Author: guiva
 *
 * Created on 22 de Agosto de 2023, 01:32
 */

#ifndef CUSTOAOCONSUMIDOR_HPP
#define CUSTOAOCONSUMIDOR_HPP

class custoAoConsumidor {
public:
    custoAoConsumidor();
    custoAoConsumidor(const custoAoConsumidor& orig);
    virtual ~custoAoConsumidor();
    void lerDados();
    double percentDistribuidor(double);
    double percentImpostos(double);
private:

};

#endif /* CUSTOAOCONSUMIDOR_HPP */

