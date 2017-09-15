#include <stdlib.h>
#include <iostream>
#include "formagenerica.hpp"
#include "blinker.hpp"



using namespace std;

Blinker::Blinker(){
int i;
int j;
setNumLinha(3);
setNumColuna(3);

Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char*)));

for(i = 0; i < getNumLinha() ; i++){

Matriz[i] = (char*)malloc(getNumColuna()*sizeof(char));

}

for(i = 0 ; i < getNumLinha(); i++){

for(j = 0 ; j < getNumColuna(); j++){

Matriz[i][j] = '-';

}

}

Matriz[0][1] = '+';
Matriz[1][1] = '+';
Matriz[2][1] = '+';


}

Blinker::~Blinker(){

free(Matriz);
Matriz = NULL;

}

void Blinker::PassaMatriz(char **Matriz,int LinhaInicial,int ColunaInicial){

Matriz[LinhaInicial][ColunaInicial] = '+';
Matriz[LinhaInicial+1][ColunaInicial] = '+';
Matriz[LinhaInicial+2][ColunaInicial] = '+';


}
