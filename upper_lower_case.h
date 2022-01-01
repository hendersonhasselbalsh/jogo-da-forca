//////// letra maiuscula

#ifndef UPPER_CASE_LOWER_CASE_H_INCLUDED
#define UPPER_CASE_LOWER_CASE_H_INCLUDED

#include <iostream>
#include <string>


int string_length(std::string f)
{
    int cont = 0;

    while(f[cont] != '\0')
    {
        cont++;
    }
 return cont;
}

int string_length(char* f)
{
    int cont = 0;

    while(f[cont] != '\0')
    {
        cont++;
    }
 return cont;
}



void caixa_alta(std::string &f)
{
    
    for(int i = 0; i < string_length(f); i++)
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

void caixa_alta(char* f)
{
    
    for(int i = 0; i < string_length(f); i++)
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



void caixa_baixa(std::string &f)
{

    for(int i = 0; i < string_length(f); i++)
    {
        switch(f[i])
        {
            case 'A':
                f[i] = 'a';
            break;

            case 'B':
                f[i] = 'b';
            break;

            case 'C':
                f[i] = 'c';
            break;

            case 'D':
                f[i] = 'd';
            break;

            case 'E':
                f[i] = 'e';
            break;

            case 'F':
                f[i] = 'f';
            break;

            case 'G':
                f[i] = 'g';
            break;

            case 'H':
                f[i] = 'h';
            break;

            case 'I':
                f[i] = 'i';
            break;

            case 'J':
                f[i] = 'j';
            break;

            case 'K':
                f[i] = 'k';
            break;

            case 'L':
                f[i] = 'l';
            break;

            case 'M':
                f[i] = 'm';
            break;

            case 'N':
                f[i] = 'n';
            break;

            case 'O':
                f[i] = 'o';
            break;

            case 'p':
                f[i] = 'P';
            break;

            case 'Q':
                f[i] = 'q';
            break;

            case 'R':
                f[i] = 'r';
            break;

            case 'S':
                f[i] = 's';
            break;

            case 'T':
                f[i] = 't';
            break;

            case 'U':
                f[i] = 'u';
            break;

            case 'V':
                f[i] = 'v';
            break;

            case 'W':
                f[i] = 'w';
            break;

            case 'X':
                f[i] = 'x';
            break;

            case 'Y':
                f[i] = 'y';
            break;

            case 'Z':
                f[i] = 'z';
            break;
        }
    }

}

void caixa_baixa(char* f)
{

    for(int i = 0; i < string_length(f); i++)
    {
        switch(f[i])
        {
            case 'A':
                f[i] = 'a';
            break;

            case 'B':
                f[i] = 'b';
            break;

            case 'C':
                f[i] = 'c';
            break;

            case 'D':
                f[i] = 'd';
            break;

            case 'E':
                f[i] = 'e';
            break;

            case 'F':
                f[i] = 'f';
            break;

            case 'G':
                f[i] = 'g';
            break;

            case 'H':
                f[i] = 'h';
            break;

            case 'I':
                f[i] = 'i';
            break;

            case 'J':
                f[i] = 'j';
            break;

            case 'K':
                f[i] = 'k';
            break;

            case 'L':
                f[i] = 'l';
            break;

            case 'M':
                f[i] = 'm';
            break;

            case 'N':
                f[i] = 'n';
            break;

            case 'O':
                f[i] = 'o';
            break;

            case 'p':
                f[i] = 'P';
            break;

            case 'Q':
                f[i] = 'q';
            break;

            case 'R':
                f[i] = 'r';
            break;

            case 'S':
                f[i] = 's';
            break;

            case 'T':
                f[i] = 't';
            break;

            case 'U':
                f[i] = 'u';
            break;

            case 'V':
                f[i] = 'v';
            break;

            case 'W':
                f[i] = 'w';
            break;

            case 'X':
                f[i] = 'x';
            break;

            case 'Y':
                f[i] = 'y';
            break;

            case 'Z':
                f[i] = 'z';
            break;
        }
    }

}



#endif