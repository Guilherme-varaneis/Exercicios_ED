/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cardapioLancheria.hpp
 * Author: guiva
 *
 * Created on 9 de Agosto de 2023, 00:46
 */

#ifndef CARDAPIOLANCHERIA_HPP
#define CARDAPIOLANCHERIA_HPP

class cardapioLancheria {
public:
    cardapioLancheria();
    cardapioLancheria(const cardapioLancheria& orig);
    virtual ~cardapioLancheria();
    void menuLancheria();
    void lerDados();
    double precoLanches(int);
    void realizarPedido(double, int, double &);
private:

};

#endif /* CARDAPIOLANCHERIA_HPP */

