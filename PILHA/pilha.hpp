#ifndef __PILHA_HPP
#define __PILHA_HPP

//inicio das inclusões de biblioteca
#include<iostream>
using namespace std;
#include"livro.hpp"
//fim das inclusões de biblioteca

class Pilha{
    private:
        Livro *cabeca;
    //fim dos atributos
    public:

        Pilha();//construtor

        void inserir_na_Pilha(string nome,int ISBN);

        bool vazia();

        void remover();

        int tamanho();

        void imprimir_toda_Pilha();

        void Mostrar_livro_do_topo();
        
    //fim dos métodos
};

#endif

//fim do código