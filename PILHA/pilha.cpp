//inicio das inclusões de bibliotecas
#include"pilha.hpp"
//fim das inclusões de bibliotecas

Pilha::Pilha(){
    cabeca = nullptr;
}

void Pilha::inserir_na_Pilha(string nome,int ISBN)
{
    //inicio das variaveis locais
        Livro *novo_no = new Livro();
        int numero = 0;
    //fim das variaveis locais

    if(vazia())
    {
        cabeca = novo_no;
    }
    else{
        cabeca->setproximo(novo_no);
        cabeca = novo_no;
        cabeca->setproximo(nullptr);
    }
    cabeca->setnome(nome);
    cabeca->setISBN(ISBN);
    cout<<"--------------------------"<<endl;
    cout<<"DADOS DO NOVO LIVRO:"<<endl;
    cout<<"Nome: "<<nome<<endl;
    cout<<"ISBN: "<<ISBN<<endl;
    numero = tamanho();
    cout<<"Numero de Livros na pilha: "<<numero<<endl;
    cout<<"--------------------------"<<endl;
}

void Pilha::remover()
{
    //inicio das variaveis locais
        Livro *ponteiro = new Livro();
        ponteiro = cabeca;
    //fim das variaveis locais
    
    cout<<"Nome do livro que saiu: "<<cabeca->getnome()<<endl;
    cabeca = ponteiro->obterproximo();
    free(ponteiro);//deletando o nó após ja feito a alteração
    cout<<"quantia de livros que ainda permanecem: "<<tamanho()<<endl;
}

bool Pilha::vazia()
{
    return (cabeca==nullptr);
}

int Pilha::tamanho()
{
    //inicio das variaveis locais
        Livro *ponteiro = new Livro();
        int contador = 0;
        ponteiro = cabeca;
    //fim das variaveis locais

    while(ponteiro)
    {
        contador++;
        ponteiro = ponteiro->obterproximo();
    }
    return contador;
}

void Pilha::imprimir_toda_Pilha()
{
    //inicio das variaveis locais
        Livro *ponteiro = new Livro();
        int contador = 0;
    //fim das variaveis locais

    ponteiro = cabeca;

    while(ponteiro)
    {
        contador++;
        cout<<"--------------------------------"<<endl;
        cout<<"Posição na fila: "<<contador<<endl;
        cout<<"Nome: "<<ponteiro->getnome()<<endl;
        cout<<"CPF: "<<ponteiro->getISBN()<<endl;
        cout<<"--------------------------------"<<endl;
        ponteiro = ponteiro->obterproximo();
    }
}

void Pilha::Mostrar_livro_do_topo()
{

    cout<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Nome do livro: "<<cabeca->getnome()<<endl;
    cout<<"ISBN do livro:"<<cabeca->getISBN();
    cout<<"----------------------------------------"<<endl;
    cout<<endl;

}

//fim do código