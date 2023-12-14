#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct Pessoa{
    int id;
    char nome[20];
    char cargo[20];
    float salario;
    int dataDeNascimento;
    int cpf;
}pessoa;

pessoa funcionario[2];


void create();
void read();
void update();
void delete();

int main(){
    int idm=0, opcao=0;


    //menu de seleção de função
    do
    {
        printf("\tmenu: \n");
        printf("1. criar\n2. consultar\n3. atualizar\n4. deletar\n5. sair\n");
        scanf("%i", &opcao);
        getchar();
        switch (opcao)
        {
        case/*criar*/ 1:
            funcionario[idm].id +=1;
            create(funcionario, idm);
            system("cls"); 
            idm++;

            break;
        case /*ler */2:
            printf("id: ");
            scanf("%i", &idm);
            read(funcionario, idm);
            system("cls");  
            break;
        case /*atualizar*/ 3:
            printf("id: ");
            scanf("%i", &idm);
            update(funcionario, idm);
            system("cls");  
            
            break;
        case /*deleter*/4:
            printf("id: ");
            scanf("%i", &idm);
            system("cls");  
            delete(funcionario, idm);

            break;
        case /*sair*/5:
            printf("fim");
            break;
        default /*erro*/:
            printf("opcao invalida");
            break;
        }

        
    } while (opcao!=5);
    


    //menu de seleção de funcionario

    //menu de selecao de edicao

    return 0;
}


void create(pessoa *funcionario, int idf){
    printf("nome: ");
    gets(funcionario[idf].nome);
    fflush(stdin);
    system("cls");

    printf("cargo: ");
    gets(funcionario[idf].cargo);
    fflush(stdin);
    system("cls");


    printf("salario: ");
    scanf("%f", &funcionario[idf].salario);
    getchar();
    system("cls");

    printf("data de nascimento: ");
    scanf("%i", &funcionario[idf].dataDeNascimento);
    getchar();
    system("cls");
    
    printf("cpf: ");
    scanf("%i", &funcionario[idf].cpf);
    system("cls");

    return;
}

void read(pessoa *funcionario, int idf02){
    printf("nome: %s\n", funcionario[idf02].nome);
    printf("cargo: %s\n", funcionario[idf02].cargo);
    printf("salario: %.2f\n", funcionario[idf02].salario);
    if (funcionario[idf02].dataDeNascimento>0)
    {
        printf("idade: %i\n", 2023 - funcionario[idf02].dataDeNascimento);
    }
    else{
        printf("idade: %i\n", funcionario[idf02].dataDeNascimento);
    }
    
    printf("cpf: %i\n", funcionario[idf02].cpf);
    sleep(3);
    
    return;
}

void update(pessoa *funcionario, int idf03){
    int op;
    char cargoF[20];
    char nomeF[20];
    do
    {
        printf("1. nome\n2. cargo\n3. salario\n4. data de nascimento\n5. cpf\n6. retornar\n");
        scanf("%i", &op);
        system("cls");
        getchar();
        switch (op)
        {
        case 1:
            printf("nome: ");
            gets(nomeF);
            strcpy(funcionario[idf03].nome, nomeF);
            fflush(stdin);
            system("cls");
            break;
        case 2:
            printf("cargo: ");
            gets(cargoF);
            strcpy(funcionario[idf03].cargo, cargoF);
            fflush(stdin);
            system("cls");
            break;
        case 3:
            printf("salario: ");
            scanf("%f", &funcionario[idf03].salario);
            getchar();
            system("cls");
            break;
        case 4:
            printf("data de nascimento: ");
            scanf("%i", &funcionario[idf03].dataDeNascimento);
            getchar();
            system("cls");
            break;
        case 5:
            printf("cpf: ");
            scanf("%i", &funcionario[idf03].cpf);
            getchar();
            system("cls");
            break;
        case 6:
            break;
        default:
            printf("opcao invalida\n");
            break;
        }
    } while (op!=6);
    
   
    return;

}

void delete(pessoa *funcionario, int idf04){
    strcpy(funcionario[idf04].nome, "");
    strcpy(funcionario[idf04].cargo, "");
    funcionario[idf04].salario = 0;
    funcionario[idf04].dataDeNascimento = 0;
    funcionario[idf04].cpf = 0;

    return;
}

