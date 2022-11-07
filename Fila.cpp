//inicio das inclusões de bibliotecas
#include"Fila.hpp"
//fim das inclusões de bibliotecas

Fila::Fila(){
    cabeca = nullptr;
    cauda = nullptr;
}

void Fila::inserir_na_lista()
{

}

bool Fila::vazia()
{
    return (cabeca==nullptr);
}