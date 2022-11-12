//inicio das bibliotecas
    #include<iostream>
    using namespace std;
    #include"pilha.hpp"
//fim das bibliotecas

int main(){

    //inicio das variaveis locais
        int op;
        int error = 0;
        Pilha pilha;
        string nome;
        int ISBN;
    //fim das variaveis locais


    //inicio do menu:
    do{

        cout<<"|---------------MENU----------------|"<<endl;
        cout<<"|1- Inserir livro na pilha          |"<<endl;
        cout<<"|2- Remover livro da pilha          |"<<endl;
        cout<<"|3- Mostrar o livro do topo da pilha|"<<endl;
        cout<<"|4- Verificar se a pilha esta vazia |"<<endl;
        cout<<"|0- Saindo                          |"<<endl;
        
        do{
            error = 0;
            cin>>op;
            if(cin.fail())
            {
                error = 1;
                cout<<"Digite um inteiro"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while(error==1);

        switch(op)
        {
            case 0:
                cout<<"Saindo...."<<endl;
            break;
            case 1:

                cin.ignore();

                cout<<"Insira o nome do livro"<<endl;
                getline(cin,nome);

                cout<<"Insira o ISBN deste livro"<<endl;
                cin>>ISBN;

                pilha.inserir_na_Pilha(nome,ISBN);

            break;
            case 2:

                pilha.remover();
            
            break;
            case 3:

                pilha.Mostrar_livro_do_topo();
            
            break;
            case 4:
                if(pilha.vazia())
                {
                    cout<<"A pilha esta vazia!"<<endl;
                }
                else{
                    cout<<"A pilha não esta vazia!"<<endl;
                }
            break;
        }

    }while(op!=0);
    //fim do menu

    return 0;
}

//fim do código 