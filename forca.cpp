//////// forca

#include <stdio.h>
#include <string.h>
#include "forca.h" //gallows                            // #include <locale.h> #include <clocale>


int main()
{

    system("cls");

    titulo();
    
    char palavra[1000];
    escoler_palavra(palavra);

    bool acertou = 0;
    bool enforcou = 0;
    
    char chutes_usuario[26];
    int tentativas = 0;


    do {
        
        desenha_forca(erros(tentativas, palavra, chutes_usuario));

        desenha_palavra(palavra, chutes_usuario, tentativas);
        chute(chutes_usuario, &tentativas);

        
        system("cls");




        enforcou = enforcou_(tentativas, palavra, chutes_usuario);
        acertou = acertou_(tentativas, chutes_usuario, palavra);

    }while(!acertou && !enforcou);


    if(acertou){
        printf("\nVOCE VENCEU!!!!!!!\n");
    } else{
        desenha_forca(6);
        printf("\nVOCE PERDEU!!!!!!!\n");
    }

    adicionar_palavra();

 return 0;
}