#include "grade.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Grade::Grade(){
int i;
int j;
setNumLinha(50);
setNumColuna(50);

Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

for(i = 0; i < getNumLinha() ; i++){

Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

}

for(i = 0 ; i < getNumLinha() ; i++){
for(j = 0 ; j < getNumColuna() ; j++){

  Matriz[i][j] = '-';

 }
  }
    }

    Grade::Grade(int NumLinha , int NumColuna){
    int i;
    int j;
    setNumLinha(NumLinha);
    setNumColuna(NumColuna);

    Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

    for(i = 0; i < getNumLinha() ; i++){

    Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

    }

    for(i = 0 ; i < getNumLinha() ; i++){
    for(j = 0 ; j < getNumColuna() ; j++){

      Matriz[i][j] = '-';

     }
      }


        }



Grade::~Grade(){

  free(Matriz);
  Matriz = NULL;

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

ImprimeMatriz();

cout << "Insira as coordenadas inicias" << endl;

do{

while(i < 10)
{

if(i > 0){

system("clear||cls");

}

ImprimeMatriz();

 cout << "Linha: "<< endl;

 cin >> X ;

while(X > getNumLinha()||X <= 0)
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> X;

}
setCoordenadaX(X-1);

 cout << "Coluna: "<< endl;

 cin >> Y ;

while(Y > getNumColuna()|| Y <= 0)
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> Y;
}

setCoordenadaY(Y-1);


Matriz[getCoordenadaX()][getCoordenadaY()] = '+' ;

i++;


}
i = 0;

cout << "Continuar inserindo novas coordenadas?" << endl;

cout << "Digite S ou N" << endl;

cin >> Parada ;

}while(Parada !='N');

}
void Grade::ImprimeMatriz(){
int i;
int j;

for(i = 0 ; i < getNumLinha(); i++){
for(j = 0 ; j < getNumColuna(); j++){

 cout << Matriz[i][j];

   }

   cout << endl;

     }
        }
