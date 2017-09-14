#include "block.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Block::Block(){
int i;
int j;
setNumLinha(3);
setNumColuna(3);

Matriz =(char**)malloc(3*sizeof(sizeof(char*)));

for(i = 0 ; i < getNumLinha(); i++){

Matriz[i] = (char *)malloc(3*sizeof(char));

}

for(i = 0 ; i < getNumLinha() ; i++){

for(j = 0 ; j < getNumColuna() ; j++){

Matriz[i][j] = '-';

}

}

Matriz[0][1] = '+';
Matriz[0][2] = '+';
Matriz[1][1] = '+';
Matriz[1][2] = '+';


}

Block::~Block(){

free(Matriz);
Matriz = NULL;

}
