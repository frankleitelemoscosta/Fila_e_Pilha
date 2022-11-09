//inicio das inclusões de bibliotecas
#include"Fila.hpp"
//fim das inclusões de bibliotecas

Fila::Fila(){
    cabeca = nullptr;
    cauda = nullptr;
}

void Fila::inserir_na_Fila(string nome,unsigned long long int cpf)
{
    Pessoa *novo_no = new Pessoa();

    if(vazia())
    {
        cabeca = novo_no;
        cauda = novo_no;
    }
    else{
        cauda->setproximo(novo_no);
        cauda = novo_no;
        cauda->setproximo(nullptr);
    }
    cauda->setnome(nome);
    cauda->setcpf(cpf);
}

void Fila::remover()
{
    //inicio das variaveis locais
    Pessoa *ponteiro = new Pessoa();
    ponteiro = cabeca;
    //fim das variaveis locais
    
    cabeca = ponteiro->obterproximo();
    free(ponteiro);//deletando o nó após ja feito a alteração
}

bool Fila::vazia()
{
    return (cabeca==nullptr);
}

int Fila::tamanho()
{
    //inicio das variaveis locais
    Pessoa *ponteiro = new Pessoa;
    int contador = 0;
    //fim das variaveis locais

    while(ponteiro)
    {
        contador++;
        ponteiro = ponteiro->obterproximo();
    }
    return contador;
}

void Fila::imprimir_toda_fila()
{
    //inicio das variaveis locais
    Pessoa *ponteiro = new Pessoa();
    int contador = 0;
    //fim das variaveis locais

    ponteiro = cabeca;

    while(ponteiro)
    {
        contador++;
        cout<<"--------------------------------"<<endl;
        cout<<"Posição na fila: "<<contador<<endl;
        cout<<"Nome: "<<ponteiro->getnome()<<endl;
        cout<<"CPF: "<<ponteiro->getcpf()<<endl;
        cout<<"--------------------------------"<<endl;
        ponteiro = ponteiro->obterproximo();
    }
}