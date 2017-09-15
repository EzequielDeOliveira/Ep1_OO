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
    setNumLinha(NumLinha+2);
    setNumColuna(NumColuna+2);

    Matriz = (char**)malloc(getNumLinha()*sizeof(sizeof(char *)));

    for(i = 0; i < getNumLinha() ; i++){

    Matriz[i] = (char *)malloc(getNumColuna()*sizeof(char));

    }

    for(i = 0 ; i < getNumLinha() ; i++){
    for(j = 0 ; j < getNumColuna() ; j++){

if(i  == 0 || j == 0 || i == getNumLinha()-1 || j == getNumColuna() - 1)
{

Matriz[i][j] = ' ';

}else {

      Matriz[i][j] = '-';

     }
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
setCoordenadaX(X);

 cout << "Coluna: "<< endl;

 cin >> Y ;

while(Y > getNumColuna()|| Y <= 0)
{

cout << "Coordenada inexistente!" << endl;

cout << "Insira novamente!" << endl;

cin >> Y;
}

setCoordenadaY(Y);


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
void  Grade::RecebeBlock(){
int X;
int Y;
cout << "posições inicias do block" << endl;
cout << "X: ";
cin >> X ;
while(X > getNumLinha() || X <= 0){

cout << "Coordenada inexistente" << endl;
cout << " Insira um valor valido" << endl;
cin >> X;

}

cout << "Y: ";
cin >> Y ;
while(Y > getNumLinha() || Y <= 0){

cout << "Coordenada inexistente" << endl;
cout << " Insira um valor valido" << endl;
cin >> Y;

}




block.PassaMatriz(Matriz , X-1 , Y-1);


}

void Grade::RecebeBlinker(){
int X;
int Y;
cout << "Insira as coordenadas inicias do Blinker" << endl;
cout << "X: ";
cin >> X;
while(X > getNumLinha() || X <= 0){

cout << "Coordenada inexistente" << endl;
cout << "Insira uma coordenada valida" << endl;
cout << "X: ";
cin >> X;

}

cout << "Y: ";
cin >> Y;
while(Y > getNumLinha() || Y <= 0){

cout << "Coordenada inexistente" << endl;
cout << "Insira uma coordenada valida" << endl;
cout << "Y: ";
cin >> Y;

}

blinker.PassaMatriz(Matriz,X-1,Y-1);

}

void Grade::RecebeGlider(){
  int X;
  int Y;
  cout << "Insira as coordenadas inicias do Glider" << endl;
  cout << "X: ";
  cin >> X;
  while(X > getNumLinha() || X <= 0){

  cout << "Coordenada inexistente" << endl;
  cout << "Insira uma coordenada valida" << endl;
  cout << "X: ";
  cin >> X;

  }

  cout << "Y: ";
  cin >> Y;
  while(Y > getNumLinha() || Y <= 0){

  cout << "Coordenada inexistente" << endl;
  cout << "Insira uma coordenada valida" << endl;
  cout << "Y: ";
  cin >> Y;

  }


glider.PassaMatriz(Matriz,X+1,Y+1);

}

void Grade::PrimeiraRegra(){
int i;
int j;
int ContaVidas = 0;

for(i = 0; i < getNumLinha() ; i++){

for(j = 0; j < getNumColuna();j++){

if(Matriz[i][j] == '+')
{

if(Matriz[i-1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j+1] == '+'){

ContaVidas += 1;

}

}

if(ContaVidas < 2 ){

Matriz[i][j] = '-';

}

}

}

}

void Grade::SegundaRegra(){
int i;
int j;
int ContaVidas = 0;

for(i = 0; i < getNumLinha() ; i++){

for(j = 0; j < getNumColuna();j++){

if(Matriz[i][j] == '+')
{

if(Matriz[i-1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j+1] == '+'){

ContaVidas += 1;

}

}

if(ContaVidas > 3 ){

Matriz[i][j] = '-';

}

}

}

}

void Grade::TerceiraRegra(){
int i;
int j;
int ContaVidas = 0;

for(i = 0; i < getNumLinha() ; i++){

for(j = 0; j < getNumColuna();j++){

if(Matriz[i][j] == '-')
{

if(Matriz[i-1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j+1] == '+'){

ContaVidas += 1;

}

}

if(ContaVidas == 3 ){

Matriz[i][j] = '+';

}

}

}

}

void Grade::QuartaRegra(){
int i;
int j;
int ContaVidas = 0;

for(i = 0; i < getNumLinha() ; i++){

for(j = 0; j < getNumColuna();j++){

if(Matriz[i][j] == '+')
{

if(Matriz[i-1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i-1][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i][j+1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j-1] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j] == '+'){

ContaVidas += 1;

}

if(Matriz[i+1][j+1] == '+'){

ContaVidas += 1;

}

}

if(ContaVidas == 2 || ContaVidas == 3){

Matriz[i][j] = '+';

}

}

}

}
