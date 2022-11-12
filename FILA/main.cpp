//inicio das inclusões de biblioteca
#include<iostream>
using namespace std;
#include"Fila.hpp"
//fim das inclusões de biblioteca

int main()
{
    //inicio das variaveis locais
    int op,error;
    Fila fila;
    string nome;
    unsigned long long int CPF;
    //fim das variaveis locais

    //inicio do menu
    do{

        do{
            cout<<"|---------------------MENU---------------------|"<<endl;
            cout<<"|1- Inserir um individuo na fila               |"<<endl;
            cout<<"|2- Remover alguem da fila                     |"<<endl;
            cout<<"|3- Imprimir todas as pessoas que estão na fila|"<<endl;
            cout<<"|0- Sair do programa                           |"<<endl;
 
            error = 0;
            cin>>op;
            if(cin.fail())
            {
                error = 1;
                cout<<"Digite um número válido por obsequio"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while(error==1);
        

        switch(op)
        {
            case 1:

            cin.ignore();

            cout<<"Insira o nome do individuo"<<endl;
            getline(cin,nome);

            cout<<"Insira o CPF dessa pessoa"<<endl;
            cin>>CPF;

            fila.inserir_na_Fila(nome,CPF);

            break;
            case 2:
                fila.remover();
            break;
            case 3:
                fila.imprimir_toda_fila();
            break;
            case 0:
                cout<<"Saindo..."<<endl;
            break;
            default:
                cout<<"você digitou uma opção inexistente"<<endl;
            break;
        }

    }while(op!=0);
    //fim do menu

    return 0;
}

//fim do código