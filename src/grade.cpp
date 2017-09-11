#include <iostream>
#include <stdlib.h>
#include "grade.hpp"

Grade::Grade(){
int i;
int j; 
this->NumLinha = 50;
this->NumColuna = 50;
 
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
this->NumLinha = NumLinha;
this->NumColuna = NumColuna;


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


int Grade::getNumLinha(){

return NumLinha;

}

int Grade::getNumColuna(){

return NumColuna;

}

int Grade::getCoordenadaX(){

return CoordenadaX;

}

void Grade::setCoordenadaX(int CoordenadaX){

this->CoordenadaX = CoordenadaX;

}


int Grade::getCoordenadaY(){

return CoordenadaY;

}

void Grade::setCoordenadaY(int CoordenadaY){

this->CoordenadaY = CoordenadaY;

}

void Grade::ReviveCelula()
{
int i=0;
char Parada;
int X;
int Y;

cout << "Insira as coordenadas inicias" << endl;

do{

while(i < 10) 
{ 
 
 cout << "Linha: "<< endl;

 cin >> X ;

while(X > getNumLinha())
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> X;

}

cout << X << "numero" << endl;

setCoordenadaX(X);

 cout << "Coluna: "<< endl;
 
 cin >> Y ;

while(Y > getNumColuna())
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> Y;

}

cout << Y << "numero" << endl;
 
setCoordenadaY(Y);


i++;

system("clear||cls");

}
i = 0;

cout << "Continuar inserindo novas coordenadas?" << endl;

cout << "Digite S ou N" << endl;

cin >> Parada ;

}while(Parada !='N');

}

