/////// packman

#ifndef FORCA_H_INCLUDED
#define FORCA_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <cstring>
#include <ostream>

using namespace std;

int string_length(char f[])
{
    int cont = 0;

    while(f[cont] != '\0')
    {
        cont++;
    }
 return cont;
}

void caixa_alta(char& f)
{
    for(int i = 0; i < 1; i++)
    {
        switch(f)
        {
            case 'a':
                f = 'A';
            break;

            case 'b':
                f = 'B';
            break;

            case 'c':
                f = 'C';
            break;

            case 'd':
                f = 'D';
            break;

            case 'e':
                f = 'E';
            break;

            case 'f':
                f = 'F';
            break;

            case 'g':
                f = 'G';
            break;

            case 'h':
                f = 'H';
            break;

            case 'i':
                f = 'I';
            break;

            case 'j':
                f = 'J';
            break;

            case 'k':
                f = 'K';
            break;

            case 'l':
                f = 'L';
            break;

            case 'm':
                f = 'M';
            break;

            case 'n':
                f = 'N';
            break;

            case 'o':
                f = 'O';
            break;

            case 'p':
                f = 'P';
            break;

            case 'q':
                f = 'Q';
            break;

            case 'r':
                f = 'R';
            break;

            case 's':
                f = 'S';
            break;

            case 't':
                f = 'T';
            break;

            case 'u':
                f = 'U';
            break;

            case 'v':
                f = 'V';
            break;

            case 'w':
                f = 'W';
            break;

            case 'x':
                f = 'X';
            break;

            case 'y':
                f = 'Y';
            break;

            case 'z':
                f = 'Z';
            break;
        }
    }
}

void caixa_alta(char* f)
{
    for(int i = 0; i < strlen(f); i++)
    {
        switch(f[i])
        {
            case 'a':
                f[i] = 'A';
            break;

            case 'b':
                f[i] = 'B';
            break;

            case 'c':
                f[i] = 'C';
            break;

            case 'd':
                f[i] = 'D';
            break;

            case 'e':
                f[i] = 'E';
            break;

            case 'f':
                f[i] = 'F';
            break;

            case 'g':
                f[i] = 'G';
            break;

            case 'h':
                f[i] = 'H';
            break;

            case 'i':
                f[i] = 'I';
            break;

            case 'j':
                f[i] = 'J';
            break;

            case 'k':
                f[i] = 'K';
            break;

            case 'l':
                f[i] = 'L';
            break;

            case 'm':
                f[i] = 'M';
            break;

            case 'n':
                f[i] = 'N';
            break;

            case 'o':
                f[i] = 'O';
            break;

            case 'p':
                f[i] = 'P';
            break;

            case 'q':
                f[i] = 'Q';
            break;

            case 'r':
                f[i] = 'R';
            break;

            case 's':
                f[i] = 'S';
            break;

            case 't':
                f[i] = 'T';
            break;

            case 'u':
                f[i] = 'U';
            break;

            case 'v':
                f[i] = 'V';
            break;

            case 'w':
                f[i] = 'W';
            break;

            case 'x':
                f[i] = 'X';
            break;

            case 'y':
                f[i] = 'Y';
            break;

            case 'z':
                f[i] = 'Z';
            break;
        }
    }
}




void titulo()   //abertura do jogo
{
    printf("********************************** \n");
    printf("*        jogo de forca           * \n");
    printf("********************************** \n\n\n\n");
}

void chute(char ch[], int *ten) // registra os chutes do usuario
{
    char chute;
    scanf(" %c", &chute);

    caixa_alta(chute);

    ch[(*ten)] = chute;
    (*ten)++;
}

void desenha_palavra(char *palavra, char *chutes_usuario, int tentativas) // desenha a tela
{
    printf("\n");
    for(unsigned int i = 0; i < strlen(palavra); i++)
    {
        bool achou = false;
        for(int j = 0; j < tentativas; j++)
        {
            if(chutes_usuario[j] == palavra[i])
            {
                achou = true;
                break;
            }
            
        }
                
        if(achou)
        {
            printf("%c ", palavra[i]);
        }
        else{
            printf("_ ");
        }
    }
    printf("\n");
}

bool enforcou_(int tentativas, char *palavra, char *chutes)
{
    int erros = 0;
    for(int i = 0; i < tentativas; i++)
    {
        bool existe = false;
        for(unsigned int j = 0; j < strlen(palavra); j++)
        {
            if(chutes[i] == palavra[j])
            {
                existe = true;
                break;
            }
        }

        if(!existe) { erros++; }
    }

 return bool( erros >= 6 );
}

bool acertou_(int tentativas, char *chutes_usuario, char *palavra)
{
    for(unsigned int i = 0; i < strlen(palavra); i++)
    {
        bool achou = false;
        for(int j = 0; j < tentativas; j++)
        {
            if(chutes_usuario[j] == palavra[i])
            {
                achou = true;
                break;
            }
            
        }

        if(!achou){
            return 0;
        }
    }   

 return 1;
}

void escoler_palavra(char *palavra)
{
    FILE* f;

    f = fopen("forca_palavra.txt", "r"); // fopen(<nome_do_arquivo>, <modo_de_abrir>)
    // fopen(); devolve um ponterio de arquivo

    if(f == NULL)
    {
        printf("desculpe, aqruivo indisponivel\n");
        exit(1);
    }

    int quantidade_palavra;
    fscanf(f, "%d", &quantidade_palavra); // scanf() lé uma variavel; fscanf() lé um arquivo
    // arquivo, dado palavra


    srand(time(NULL));
    int randomico = rand() % quantidade_palavra;

    for(int i = 0; i <= randomico; i++)
    {
        fscanf(f, "%s", palavra);
        // fscanf é um ponteiro que só lé a proxima linha, numca o anterior
    }

    fclose(f); // toda vez que abrir um aquivo deve-se fecha-lo
}

void adicionar_palavra()
{
    char quer;
    printf("deseja adicionar uma nova palavra?  (Y/N)\n");
    scanf(" %c", &quer);

    if(quer == 'Y' || quer == 'y')
    {
        char new_palavra[1000]; // array
        printf("qual a nova palavra? (por favor, escreva em caixa auta) \n");
        scanf("%s", &new_palavra);

        caixa_alta(new_palavra);

        FILE* f;
        f = fopen("forca_palavra.txt", "r+"); // r => leitura; r+ => ler e escrever

        if(f == NULL)
        {
            printf("arquivo indisponivel\n");
            exit(1);
        }

     //============= ler a primeira posição ================
        int qnd;
        fscanf(f, "%d", &qnd);
        qnd++; // posiçaõ incermenta
     //=====================================================
     //============= posiciona o ponteiro ==================

        fseek(f, 0, SEEK_SET);
        // nome, local, constante;
        fprintf(f, "%d", qnd);


        fseek(f, 0, SEEK_END); // posiciona no final do arquivo;
        fprintf(f, "\n%s", new_palavra);

        fclose(f);
        printf("palavra adicionada com sucesso\n");
    }
}

void desenha_forca(int erros)
{
    printf(" _______________           \n"  ) ;                  
    printf(" |  /          |           \n"  )     ;
    printf(" | /          %c %c        \n", (erros>=1 ?'(': ' '), (erros>=1 ?')': ' ')   )    ;
    printf(" |/          %c %c %c      \n", (erros>=3 ?'\\': ' '), (erros>=1 ?'|': ' '),  (erros>=4 ?'/': ' ')  )  ;  
    printf(" |            %c%c%c       \n", (erros>=3 ?'\\': ' '), (erros>=2 ?'|': ' '), (erros>=4 ?'/': ' ')  )  ; 
    printf(" |             %c          \n", (erros>=2 ?'|': ' ')  )  ;
    printf(" |            %c %c        \n", (erros>=5 ?'/': ' '), (erros>=6 ?'\\': ' ')  );
    printf(" |           %c   %c       \n", (erros>=5 ?'/': ' '), (erros>=6 ?'\\': ' ')  );
    printf(" |                         \n"  );
    printf(" |                         \n"  );
    printf(" |                         \n"  );
    printf("_| _______                 \n"  );

 // endl
}

int erros(int tentativas, char *palavra, char *chutes)
{
    int erros = 0;
    for(int i = 0; i < tentativas; i++)
    {
        bool existe = false;
        for(unsigned int j = 0; j < strlen(palavra); j++)
        {
            if(chutes[i] == palavra[j])
            {
                existe = true;
                break;
            }
        }

        if(!existe) { erros++; }
    }

 return erros;
}



#endif