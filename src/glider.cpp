#include "glider.hpp"
#include "formagenerica.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

Glider::Glider(int forma){

int i;
int j;
setNumLinha(3);
setNumColuna(3);
Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char*)));

for(i = 0; i < getNumLinha() ; i++){

Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

}

for(i  = 0; i < getNumLinha(); i++){

for(j = 0 ; j < getNumColuna();j++){

Matriz[i][j] = '-';

}


}


switch(forma)
{

case 1:

Matriz[0][1] = '+';
Matriz[1][2] = '+';
Matriz[2][0] = '+';
Matriz[2][1] = '+';
Matriz[2][2] = '+';
     break;
case 2:
Matriz[0][0] = '+';
Matriz[1][1] = '+';
Matriz[2][1] = '+';
Matriz[0][2] = '+';
Matriz[1][2] = '+';

    break;
case 3:
Matriz[1][0] = '+';
Matriz[2][1] = '+';
Matriz[0][2] = '+';
Matriz[1][2] = '+';
Matriz[2][2] = '+';

    break;
case 4:
Matriz[0][0] = '+';
Matriz[2][0] = '+';
Matriz[2][1] = '+';
Matriz[1][1] = '+';
Matriz[1][2] = '+';
     break;
default:
      cout << "forma inexistente" << endl;

}



}

Glider::~Glider(){

free(Matriz);
Matriz = NULL;

}
