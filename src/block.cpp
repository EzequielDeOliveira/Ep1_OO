#include "block.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Block::Block()
{


    int i;
    int j;
    setNumLinha(2);
    setNumColuna(2);

    Matriz =(char**)malloc(getNumLinha()*sizeof(sizeof(char*)));

    for(i = 0 ; i < getNumLinha(); i++)
    {

        Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

    }

    for(i = 0 ; i < getNumLinha() ; i++)
    {

        for(j = 0 ; j < getNumColuna() ; j++)
        {

            Matriz[i][j] = '.';

        }

    }

    Matriz[0][0] = '0';
    Matriz[0][1] = '0';
    Matriz[1][0] = '0';
    Matriz[1][1] = '0';


}

Block::~Block()
{

    free(Matriz);
    Matriz = NULL;

}

void Block::PassaMatriz(char**Matriz, int LinhaInicial , int ColunaInicial)
{
    int i;
    int j;
    int ValorInicial = ColunaInicial;


    for(i = 0; i < getNumLinha(); i++ )
    {

        for(j = 0 ; j < getNumColuna(); j++)
        {

            Matriz[LinhaInicial][ColunaInicial] = this->Matriz[i][j];


            ColunaInicial++;
        }
        ColunaInicial = ValorInicial;
        LinhaInicial++;
    }


}
