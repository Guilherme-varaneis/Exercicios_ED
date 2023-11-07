/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   converterIdade.hpp
 * Author: guiva
 *
 * Created on 7 de Agosto de 2023, 16:00
 */

#ifndef CONVERTERIDADE_HPP
#define CONVERTERIDADE_HPP

class converterIdade {
public:
    converterIdade();
    converterIdade(const converterIdade& orig);
    virtual ~converterIdade();
    void cabecalho();
    void lerDados();
    int ConversaoDiasEmAnos(int);
    int conversaoDiasEmMeses(int);
    int diasRestantes(int);
    
private:

};

#endif /* CONVERTERIDADE_HPP */

