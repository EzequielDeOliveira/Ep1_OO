#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

using namespace std;

int main(int argc, char ** argv){

int TamanhoMatriz;
int BotaoContinua;
int NumLinha;
int NumColuna;
Grade campoPadrao;
int ModoDeJogo;

system("clear||cls");

cout << " Bem vindo(a) ao Conway's Game of Life" << endl;
cout << endl;
cout << "O jogo se baseia em quatro regras" << endl;
cout << "São elas: " << endl;
cout << "1 - Qualquer célula viva com menos de dois vizinhos vivos morre de solidão." << endl;
cout << "2 - Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação." << endl;
cout << "3 - Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva." << endl;
cout << "4 - Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração." << endl;
cout << endl;
cout << "digite \"1\" para prosseguir: ";
cin >> BotaoContinua;
while(BotaoContinua != 1){

cout << "digite \"1\" para prosseguir: ";
cin >> BotaoContinua;

}

BotaoContinua = 0;

system("clear||cls");

cout << "Instruções: " << endl;
cout << endl;
cout << "1 - Primeiramente Deve-se escolher o tamanho do campo ou escolher o tamanho padrão" << endl;
cout << "2 - Logo após deve-se decidir o Modo de jogo, Ver a Gosper glider gun ou Campo livre " << endl;
cout << "3 - Gosper glider gun: será exibido a gun" << endl;
cout << "4 - Modo Livre: O campo ficará livre para escolher as posições de suas células vivas e iniciar o jogo" << endl;
cout << endl;
cout << "digite \"1\" para prosseguir: ";
cin >> BotaoContinua;

while(BotaoContinua != 1){

cout << "digite \"1\" para prosseguir: ";
cin >> BotaoContinua;

}

BotaoContinua = 0;

system("clear||cls");

cout << "escolha de tamanho do campo!" << endl;
cout << endl;
cout << "Escolha: " << endl;
cout << "1 - Tamanho de campo padrão" << endl;
cout << "2 - Tamanho de campo Personalizado" << endl;
cout << "Digite a opção desejada: " ;
cin >> TamanhoMatriz;
 if(TamanhoMatriz == 2){

cout << "Digite as dimensões do seu campo!" << endl;
cout << "Numéro de linhas: " << endl;
cin >> NumLinha;
cout << endl;
cout << "Numéro de colunas: " << endl;
cin >> NumColuna;

}

system("clear||cls");

cout << "Modo de jogo" << endl;
cout << endl;
cout << "Digite:" << endl;
cout << "1 - Gosper glider gun" << endl;
cout << "2 - Modo livre" << endl;
cout << "Modo: ";
cin >> ModoDeJogo;

while(ModoDeJogo < 1 || ModoDeJogo > 2){

cout << "Digite um mode válido: ";
cin >> ModoDeJogo;

}

system("clear||cls");



if(ModoDeJogo == 1){


campoPadrao.RecebeBlock(6,2);

campoPadrao.ImprimeMatriz();


}




return 0;
}
