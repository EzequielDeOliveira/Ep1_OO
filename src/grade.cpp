#include "grade.hpp"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

Grade::Grade(){
int i;
int j;
setNumLinha(40+2);
setNumColuna(100+2);

Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

for(i = 0; i < getNumLinha() ; i++){

Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

}

MatrizAux = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

for(i = 0; i < getNumLinha() ; i++){

MatrizAux[i] = (char *)malloc(getNumColuna()*sizeof(char));

}


for(i = 0 ; i < getNumLinha() ; i++){
for(j = 0 ; j < getNumColuna() ; j++){

if(i  == 0 || j == 0 || i == getNumLinha()-1 || j == getNumColuna()-1)
{

Matriz[i][j] = ' ';

}else {

  Matriz[i][j] = '-';

 }
  }
    }

    for(i = 0 ; i < getNumLinha() ; i++){
    for(j = 0 ; j < getNumColuna() ; j++){

    if(i  == 0 || j == 0 || i == getNumLinha()-1 || j == getNumColuna()-1)
    {

    MatrizAux[i][j] = ' ';

    }else {

      MatrizAux[i][j] = '-';

     }
      }
        }
}


    Grade::Grade(int NumLinha , int NumColuna){
    int i;
    int j;
    setNumLinha(NumLinha+2);
    setNumColuna(NumColuna+2);

    Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

    for(i = 0; i < getNumLinha() ; i++){

    Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

    }

    MatrizAux = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

    for(i = 0; i < getNumLinha() ; i++){

    MatrizAux[i] = (char *)malloc(getNumColuna()*sizeof(char));

    }


    for(i = 0 ; i < getNumLinha() ; i++){
    for(j = 0 ; j < getNumColuna() ; j++){

if(i  == 0 || j == 0 || i == getNumLinha()-1 || j == getNumColuna()-1)
{

Matriz[i][j] = ' ';

}else {

      Matriz[i][j] = '-';

     }
      }
        }

        for(i = 0 ; i < getNumLinha() ; i++){
        for(j = 0 ; j < getNumColuna() ; j++){

    if(i  == 0 || j == 0 || i == getNumLinha()-1 || j == getNumColuna()-1)
    {

    MatrizAux[i][j] = ' ';

    }else {

          MatrizAux[i][j] = '-';

         }
          }
            }
}



Grade::~Grade(){

  free(Matriz);
  free(MatrizAux);
  Matriz = NULL;
  MatrizAux = NULL;

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

while(i < 5)
{

if(i == 0){

system("clear||cls");

ImprimeMatriz();

}


 cout << "Linha: "<< endl;

 cin >> X ;

while(X > (getNumLinha()-2)||X <= 0)
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> X;

}
setCoordenadaX(X);

 cout << "Coluna: "<< endl;

 cin >> Y ;

while(Y > getNumColuna()-2|| Y <= 0)
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> Y;
}

setCoordenadaY(Y);


Matriz[getCoordenadaX()][getCoordenadaY()] = '+' ;

i++;

system("clear||cls");

ImprimeMatriz();

}
i = 0;


cout << "Continuar inserindo novas coordenadas?" << endl;

cout << "Digite S ou N" << endl;

cin >> Parada ;

}while(Parada !='N');

system("clear||cls");

}


void Grade::ReviveCelulaCoordenada(int linha,int coluna)
{
setCoordenadaX(linha);
setCoordenadaY(coluna);

Matriz[getCoordenadaX()][getCoordenadaY()] = '+' ;

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

        void  Grade::RecebeBlock(){
        int X ;
        int Y ;
        cout << "posições inicias do block" << endl;
        cout << "X: ";
        cin >> X ;
        while(X > getNumLinha() || X <= 1){

        cout << "Coordenada inexistente Coordenada inexistente ou a Coordenada não possui espaço" << endl;
        cout << " Insira um valor valido" << endl;
        cin >> X;

        }

        cout << "Y: ";
        cin >> Y ;
        while(Y > getNumLinha() || Y <= 1){

        cout << "Coordenada inexistente ou a Coordenada não possui espaço" << endl;
        cout << " Insira um valor valido" << endl;
        cin >> Y;

        }




        block.PassaMatriz(Matriz , X-1 , Y-1);


        }

void  Grade::RecebeBlockCoordenada(int linha,int coluna){
int X = linha ;
int Y = coluna;

block.PassaMatriz(Matriz , X-1 , Y-1);


}


void Grade::RecebeBlinker(){
int X;
int Y;
cout << "Insira as coordenadas inicias do Blinker" << endl;
cout << "X: ";
cin >> X;
while(X > getNumLinha() - 3|| X <= 2 ){

cout << "Coordenada inexistente" << endl;
cout << "Insira uma coordenada valida" << endl;
cout << "X: ";
cin >> X;

}

cout << "Y: ";
cin >> Y;
while(Y > getNumLinha() - 3 || Y <= 2 ){

cout << "Coordenada inexistente" << endl;
cout << "Insira uma coordenada valida" << endl;
cout << "Y: ";
cin >> Y;

}

blinker.PassaMatriz(Matriz,X-1,Y-1);

}

void Grade::RecebeBlinkerCoordenada(int linha,int coluna){
int X = linha;
int Y = coluna;

blinker.PassaMatriz(Matriz,X-1,Y-1);

}


void Grade::RecebeGlider(){
  int X;
  int Y;
  cout << "Insira as coordenadas inicias do Glider" << endl;
  cout << "X: ";
  cin >> X;
  while(X > getNumLinha()-3 || X <= 0){

  cout << "Coordenada inexistente" << endl;
  cout << "Insira uma coordenada valida" << endl;
  cout << "X: ";
  cin >> X;

  }

  cout << "Y: ";
  cin >> Y;
  while(Y > getNumLinha()-3 || Y <= 0){

  cout << "Coordenada inexistente" << endl;
  cout << "Insira uma coordenada valida" << endl;
  cout << "Y: ";
  cin >> Y;

  }


glider.PassaMatriz(Matriz,X,Y);

}

int Grade::VerificaCelula(int NumLinha ,int NumColuna){

int ContaVidas = 0;
if(Matriz[NumLinha][NumColuna]  == ' '){

return 10;

}else  if(Matriz[NumLinha][NumColuna]  == '+' || Matriz[NumLinha][NumColuna]  == '-'){

 if(Matriz[NumLinha-1][NumColuna-1] == '+'){

ContaVidas += 1;


}

 if(Matriz[NumLinha-1][NumColuna] == '+'){

ContaVidas += 1;

}

if(Matriz[NumLinha-1][NumColuna+1] == '+'){

ContaVidas += 1;

}

 if(Matriz[NumLinha][NumColuna-1] == '+'){

ContaVidas += 1;

}

if(Matriz[NumLinha][NumColuna+1] == '+'){

ContaVidas += 1;

}

 if(Matriz[NumLinha+1][NumColuna-1] == '+'){

ContaVidas += 1;

}

 if(Matriz[NumLinha+1][NumColuna] == '+'){

ContaVidas += 1;

}

 if(Matriz[NumLinha+1][NumColuna+1] == '+'){

ContaVidas += 1;

}
//cout << "Contavidas : " << ContaVidas << endl;
return ContaVidas;

}

}



void Grade::AtualizaCelula(int NumVizinho,int NumLinha , int NumColuna){

//cout << NumVizinho << endl;

if(NumVizinho == 10){

MatrizAux[NumLinha][NumColuna] = ' ';

}

if(NumVizinho < 2){
if(Matriz[NumLinha][NumColuna] == '+'||Matriz[NumLinha][NumColuna] == '-'){

MatrizAux[NumLinha][NumColuna] = '-';

}

}

if(NumVizinho > 3){
  if(Matriz[NumLinha][NumColuna] == '+'||Matriz[NumLinha][NumColuna] == '-'){

  MatrizAux[NumLinha][NumColuna] = '-';

  }

}

if(NumVizinho == 3){
if(Matriz[NumLinha][NumColuna] == '-'||Matriz[NumLinha][NumColuna] == '+'){

  MatrizAux[NumLinha][NumColuna] = '+';

  }

}

if(NumVizinho == 2){

if(Matriz[NumLinha][NumColuna] == '+'){

  MatrizAux[NumLinha][NumColuna] = '+';

  }

}


}

void Grade::CicloDeVida(){
int i;
int j;
int NumVizinho ;



for(i = 0;i < getNumLinha() ;i++){

for(j = 0; j < getNumColuna() ; j++){

NumVizinho = VerificaCelula(i , j);

//cout << VerificaCelula(i , j) << endl;

AtualizaCelula(NumVizinho,i,j);

}

}

for(i = 0;i < getNumLinha() ;i++){

for(j = 0; j < getNumColuna() ; j++){

Matriz[i][j] = MatrizAux[i][j];

}

}
system("clear");

ImprimeMatriz();

usleep(200000);

}
