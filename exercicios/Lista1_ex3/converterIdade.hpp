/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   converterIdade.hpp
 * Author: guiva
 *
 * Created on 4 de Agosto de 2023, 19:19
 */

#ifndef CONVERTERIDADE_HPP
#define CONVERTERIDADE_HPP

class converterIdade {
public:
    converterIdade();
    converterIdade(const converterIdade& orig);
    virtual ~converterIdade();
    void lerDados();
    int converterAnosEmDias(int);
    int converterMesesEmDias(int);
    int mostraDias(int);
private:

};

#endif /* CONVERTERIDADE_HPP */

