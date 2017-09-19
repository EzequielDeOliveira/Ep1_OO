#include "formagenerica.hpp"
#include <iostream>

using namespace std;

FormaGenerica::FormaGenerica()
{

    NumLinha = 1;

    NumColuna = 1;


}

int FormaGenerica::getNumLinha()
{

    return NumLinha;

}

void FormaGenerica::setNumLinha(int NumLinha)
{

    this->NumLinha = NumLinha;

}

int FormaGenerica::getNumColuna()
{

    return NumColuna;

}

void FormaGenerica::setNumColuna(int NumColuna)
{

    this->NumColuna = NumColuna;

}
