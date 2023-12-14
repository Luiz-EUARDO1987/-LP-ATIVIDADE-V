#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct livro
{
    int id;
    char titulo[20];
    char autor[20];
    float preco;
    int dataDePublicacao;
} livro;

livro livros[2];

void create();
void read();
void update();
void delete();

int main()
{
    int idm = 0, opcao = 0;

    // menu de seleção de função
    do
    {
        printf("\tmenu: \n");
        printf("1. criar\n2. consultar\n3. atualizar\n4. deletar\n5. sair\n");
        scanf("%i", &opcao);
        getchar();
        switch (opcao)
        {
        case /*criar*/ 1:
            livros[idm].id += 1;
            create(livros, idm);
            system("cls");
            idm++;

            break;
        case /*ler */ 2:
            printf("id: ");
            scanf("%i", &idm);
            read(livros, idm);
            system("cls");
            break;
        case /*atualizar*/ 3:
            printf("id: ");
            scanf("%i", &idm);
            update(livros, idm);
            system("cls");

            break;
        case /*deleter*/ 4:
            printf("id: ");
            scanf("%i", &idm);
            system("cls");
            delete (livros, idm);

            break;
        case /*sair*/ 5:
            printf("fim");
            break;
        default /*erro*/:
            printf("opcao invalida");
            break;
        }

    } while (opcao != 5);

    // menu de seleção de livros

    // menu de selecao de edicao

    return 0;
}

void create(livro *livros, int idf)
{
    printf("titulo: ");
    gets(livros[idf].titulo);
    fflush(stdin);
    system("cls");

    printf("autor: ");
    gets(livros[idf].autor);
    fflush(stdin);
    system("cls");

    printf("preco: ");
    scanf("%f", &livros[idf].preco);
    getchar();
    system("cls");

    printf("data de publicacao: ");
    scanf("%i", &livros[idf].dataDePublicacao);
    getchar();
    system("cls");

    return;
}

void read(livro *livros, int idf02)
{
    printf("titulo: %s\n", livros[idf02].titulo);
    printf("autor: %s\n", livros[idf02].autor);
    printf("preco: %.2f\n", livros[idf02].preco);
    printf("idade: %i\n", livros[idf02].dataDePublicacao);
    sleep(3);
    system("cls");

    return;
}

void update(livro *livros, int idf03)
{
    int op;
    char autorF[20];
    char tituloF[20];
    do
    {
        printf("1. titulo\n2. autor\n3. preco\n4. data de publicacao\n5. cpf\n6. retornar\n");
        scanf("%i", &op);
        system("cls");
        getchar();
        switch (op)
        {
        case 1:
            printf("titulo: ");
            gets(tituloF);
            strcpy(livros[idf03].titulo, tituloF);
            fflush(stdin);
            system("cls");
            break;
        case 2:
            printf("autor: ");
            gets(autorF);
            strcpy(livros[idf03].autor, autorF);
            fflush(stdin);
            system("cls");
            break;
        case 3:
            printf("preco: ");
            scanf("%f", &livros[idf03].preco);
            getchar();
            system("cls");
            break;
        case 4:
            printf("data de nascimento: ");
            scanf("%i", &livros[idf03].dataDePublicacao);
            getchar();
            system("cls");
            break;
        case 6:
            break;
        default:
            printf("opcao invalida\n");
            break;
        }
    } while (op != 6);

    return;
}

void delete(livro *livros, int idf04)
{
    strcpy(livros[idf04].titulo, "");
    strcpy(livros[idf04].autor, "");
    livros[idf04].preco = 0;
    livros[idf04].dataDePublicacao = 0;

    return;
}
