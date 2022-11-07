#ifndef __FILA_HPP
#define __FILA_HPP

//inicio das inclusões de biblioteca
#include<iostream>
using namespace std;
//fim das inclusões de biblioteca
class Fila{
private:
    Pessoa *cabeca;
    Pessoa *cauda;
//fim dos atributos
public:

    Fila();//construtor

    void inserir_na_lista();

    bool vazia();

};

#endif

//fim do código