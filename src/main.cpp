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
int Geracao = 0;
int Parada = 1;

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
cout << "1 - Primeiramente Deve-se escolher o tamanho do campo ou escolher o tamanho padrão." << endl;
cout << "2 - Logo após deve-se decidir o Modo de jogo, Ver a Gosper glider gun ou Campo livre. " << endl;
cout << "3 - Gosper glider gun: será exibido a gun." << endl;
cout << "4 - Modo Livre: O campo ficará livre para escolher as posições de suas células vivas e iniciar o jogo." << endl;
cout << "5 - O campo padrão e composto por 40 linhas e 100 colunas." << endl;
cout << "6 - No caso de Campo Personalizado no modo Glider gun o campo deve ter no minimo 35 linhas e 35 colunas." << endl;
cout << "7 - Durante a execução o jogo irá perguntar se deseja continuar ou parar." << endl;
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

if(TamanhoMatriz == 1){

campoPadrao.RecebeBlockCoordenada(8,2);

campoPadrao.RecebeBlinkerCoordenada(8,12);

campoPadrao.ReviveCelulaCoordenada(6,12);

campoPadrao.ReviveCelulaCoordenada(10,12);


campoPadrao.ReviveCelulaCoordenada(5,13);


campoPadrao.ReviveCelulaCoordenada(11,13);


campoPadrao.ReviveCelulaCoordenada(5,14);


campoPadrao.ReviveCelulaCoordenada(11,14);


campoPadrao.ReviveCelulaCoordenada(8,15);


campoPadrao.ReviveCelulaCoordenada(6,16);


campoPadrao.ReviveCelulaCoordenada(10,16);

campoPadrao.RecebeBlinkerCoordenada(8,18);

campoPadrao.ReviveCelulaCoordenada(8,18);

campoPadrao.RecebeBlinkerCoordenada(6,22);

campoPadrao.RecebeBlinkerCoordenada(6,23);

campoPadrao.ReviveCelulaCoordenada(4,23);

campoPadrao.ReviveCelulaCoordenada(8,23);

campoPadrao.ReviveCelulaCoordenada(3,25);

campoPadrao.ReviveCelulaCoordenada(4,25);

campoPadrao.ReviveCelulaCoordenada(8,25);

campoPadrao.ReviveCelulaCoordenada(9,25);

campoPadrao.RecebeBlockCoordenada(6,34);

campoPadrao.ImprimeMatriz();


cout << endl;
cout << "Pressione \"1\" para iniciar:  ";
cin >> BotaoContinua;

while(BotaoContinua != 1){

  cout << "Pressione \"1\" para iniciar:  ";
  cin >> BotaoContinua;

}

system("clear||cls");

while(Parada != 0)
{

  while(Geracao < 300){

  campoPadrao.CicloDeVida();

    Geracao++;
  }

cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
cin >> Parada;
}


}else{


  if(NumLinha >= 35 && NumColuna >= 35){

  Grade campoVariavel(NumLinha,NumColuna);

  campoVariavel.RecebeBlockCoordenada(8,2);

  campoVariavel.RecebeBlinkerCoordenada(8,12);

  campoVariavel.ReviveCelulaCoordenada(6,12);

  campoVariavel.ReviveCelulaCoordenada(10,12);

campoVariavel.ReviveCelulaCoordenada(5,13);


  campoVariavel.ReviveCelulaCoordenada(11,13);


  campoVariavel.ReviveCelulaCoordenada(5,14);


  campoVariavel.ReviveCelulaCoordenada(11,14);


  campoVariavel.ReviveCelulaCoordenada(8,15);


campoVariavel.ReviveCelulaCoordenada(6,16);


  campoVariavel.ReviveCelulaCoordenada(10,16);

  campoVariavel.RecebeBlinkerCoordenada(8,18);

  campoVariavel.ReviveCelulaCoordenada(8,18);

  campoVariavel.RecebeBlinkerCoordenada(6,22);

campoVariavel.RecebeBlinkerCoordenada(6,23);

  campoVariavel.ReviveCelulaCoordenada(4,23);

  campoVariavel.ReviveCelulaCoordenada(8,23);

  campoVariavel.ReviveCelulaCoordenada(3,25);

  campoVariavel.ReviveCelulaCoordenada(4,25);

  campoVariavel.ReviveCelulaCoordenada(8,25);

  campoVariavel.ReviveCelulaCoordenada(9,25);

  campoVariavel.RecebeBlockCoordenada(6,34);

  campoVariavel.ImprimeMatriz();

  cout << endl;
  cout << "Pressione \"1\" para iniciar:  ";
  cin >> BotaoContinua;

  while(BotaoContinua != 1){

    cout << "Pressione \"1\" para iniciar:  ";
    cin >> BotaoContinua;

  }

  system("clear||cls");

  while(Parada != 0)
  {

    while(Geracao < 300){

    campoVariavel.CicloDeVida();

      Geracao++;
    }

  cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
  cin >> Parada;
  }

}else{

cout << "Campo requer Espaço para a Gosper glider gun" << endl;

}

}

}else if(ModoDeJogo == 2){

if(TamanhoMatriz == 1){

campoPadrao.ReviveCelula();

while(Parada != 0)
{

  while(Geracao < 300){

  campoPadrao.CicloDeVida();

    Geracao++;
  }

cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
cin >> Parada;
}

}else if(TamanhoMatriz == 2){

   Grade campoVariavel(NumLinha , NumColuna);

  campoVariavel.ReviveCelula();

  while(Parada != 0)
  {

    while(Geracao < 300){

    campoVariavel.CicloDeVida();

      Geracao++;
    }

  cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
  cin >> Parada;
  }


}




}

return 0;
}
