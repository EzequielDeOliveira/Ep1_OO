#include <iostream>
#include <stdlib.h>
#include "grade.hpp"

Grade::Grade(){
int i;
int j; 
NumLinha = 50;
NumColuna = 50;
 
Matriz =(char**)malloc(NumLinha*sizeof(sizeof(char*)));

for(i = 0; i < NumLinha; i++){

Matriz[i] = (char*)malloc(NumColuna*sizeof(char));

}

for(i = 0;i < NumLinha;i++){

for(j = 0; j < NumColuna;j++){

Matriz[i][j] = '-' ;

}

}

}


Grade::Grade(int NumLinha , int NumColuna){
int i;
int j;

Matriz =(char**)malloc(NumLinha*sizeof(sizeof(char*)));

for(i = 0; i < NumLinha; i++){

Matriz[i] = (char*)malloc(NumColuna*sizeof(char));

}

for(i = 0;i < NumLinha;i++){

for(j = 0; j < NumColuna;j++){

Matriz[i][j] = '-' ;

}

}

}


Grade::~Grade(){

 free(Matriz);
 
 Matriz=NULL;

 }
