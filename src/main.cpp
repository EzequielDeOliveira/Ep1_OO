#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

using namespace std;

int main(int argc, char ** argv)
{

    int TamanhoMatriz;
    int BotaoContinua;
    int NumLinha;
    int NumColuna;
    Grade campoPadrao;
    int ModoDeJogo;
    int Geracao = 0;
    int Parada = 1;
    int NumGeracoes;

    system("clear||cls");
    cout << "======================================" << endl;
    cout << " Bem vindo(a) ao Conway's Game of Life" << endl;
    cout << "======================================" << endl;;
    cout << endl;
    cout << endl;
    cout << "O jogo se baseia em quatro regras" << endl;
    cout << endl;
    cout << "São elas: " << endl;
    cout << "1 - Qualquer célula viva com menos de dois vizinhos vivos morre de solidão." << endl;
    cout << endl;
    cout << "2 - Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação." << endl;
    cout << endl;
    cout << "3 - Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva." << endl;
    cout << endl;
    cout << "4 - Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Representação das Células: " << endl;
    cout << endl;
    cout << "Célula viva = 0" << endl;
    cout << endl;
    cout << "Célula morta = ." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "digite \"1\" para prosseguir: ";
    cin >> BotaoContinua;
    while(BotaoContinua != 1)
    {

        cout << "digite \"1\" para prosseguir: ";
        cin >> BotaoContinua;

    }

    BotaoContinua = 0;

    system("clear||cls");

    cout << "Instruções: " << endl;
    cout << endl;
    cout << endl;
    cout << "1 - Primeiramente Deve-se escolher o tamanho do campo ou escolher o tamanho padrão." << endl;
    cout << endl;
    cout << "2 - Se a escolha for o campo Personalizavel, será perguntado as medidas." << endl;
    cout << endl;
    cout << "3 - Logo após deve-se decidir o Modo de jogo, Ver a Gosper glider gun ou Campo livre. " << endl;
    cout << endl;
    cout << "4 - Gosper glider gun: será exibido a gun." << endl;
    cout << endl;
    cout << "5 - Modo Livre: O campo ficará livre para escolher as posições de suas células vivas e iniciar o jogo." << endl;
    cout << endl;
    cout << "6 - No modo livre pode-se dar vida a quantas células desejar, se estiver dentro dos parâmetros do campo. " << endl;
    cout << endl;
    cout << "7 - O campo padrão e composto por 40 linhas e 100 colunas." << endl;
    cout << endl;
    cout << "8 - No caso de Campo Personalizado no modo Glider gun o campo deve ter no minimo 40 linhas e 40 colunas." << endl;
    cout << endl;
    cout << "9 - O campo terá um total de 300 geraçoes seguidas" << endl;
    cout << endl;
    cout << "10- Chegando na geração 300 aperte \"0\" para parar, ou \"1\" para mais 300 Geraçoes." << endl;
    cout << endl;
    cout << "11- Ao fim o jogo e finalizado." << endl;
    cout << endl;
    cout << endl;
    cout <<" Bom Jogo !!" << endl;
    cout << endl;
    cout << endl;
    cout << "digite \"1\" para prosseguir: ";
    cin >> BotaoContinua;

    while(BotaoContinua != 1)
    {

        cout << "digite \"1\" para prosseguir: ";
        cin >> BotaoContinua;

    }

    BotaoContinua = 0;

    system("clear||cls");

    cout << "escolha de tamanho do campo!" << endl;
    cout << endl;
    cout << "Escolha: " << endl;
    cout << "1 - Tamanho de campo padrão" << endl;
    cout << endl;
    cout << "2 - Tamanho de campo Personalizado" << endl;
    cout << endl;
    cout << "Digite a opção desejada: " ;
    cin >> TamanhoMatriz;
    while(TamanhoMatriz < 1 ||TamanhoMatriz > 2)
    {

        cout << "Digite a opção desejada: " ;
        cin >> TamanhoMatriz;
    }

    if(TamanhoMatriz == 2)
    {

        cout << "Digite as dimensões do seu campo!" << endl;
        cout << endl;
        cout << "Numéro de linhas: " << endl;
        cin >> NumLinha;
        cout << endl;
        cout << "Numéro de colunas: " << endl;
        cin >> NumColuna;
        cout << endl;

    }

    system("clear||cls");

    cout << "Modo de jogo" << endl;
    cout << endl;
    cout << "Digite:" << endl;
    cout << endl;
    cout << "1 - Gosper glider gun" << endl;
    cout << endl;
    cout << "2 - Modo livre" << endl;
    cout << endl;
    cout << "3 - Block" << endl;
    cout << endl;
    cout << "4 - Blinker" << endl;
    cout << endl;
    cout << "5 - Glider" << endl;
    cout << endl;
    cout << "Modo: ";
    cin >> ModoDeJogo;

    while(ModoDeJogo < 1 || ModoDeJogo > 5)
    {

        cout << "Digite um mode válido: ";
        cin >> ModoDeJogo;

    }

    system("clear||cls");


    cout << "Insira o número de gerações desejadas: " ;
    cin >> NumGeracoes;
    while(NumGeracoes < 1){


     cout << "Número de gerações e inválido" << endl;

     cout << "Insira o número válido de grações desejadas: " ;
     cin >> NumGeracoes;


   }

   system("clear||cls");

    if(ModoDeJogo == 1)
    {

        if(TamanhoMatriz == 1)
        {


            campoPadrao.RecebeBlock(8,2);

            campoPadrao.RecebeBlinker(8,12);

            campoPadrao.ReviveCelula(6,12);

            campoPadrao.ReviveCelula(10,12);


            campoPadrao.ReviveCelula(5,13);


            campoPadrao.ReviveCelula(11,13);


            campoPadrao.ReviveCelula(5,14);


            campoPadrao.ReviveCelula(11,14);


            campoPadrao.ReviveCelula(8,15);


            campoPadrao.ReviveCelula(6,16);


            campoPadrao.ReviveCelula(10,16);

            campoPadrao.RecebeBlinker(8,18);

            campoPadrao.ReviveCelula(8,18);

            campoPadrao.RecebeBlinker(6,22);

            campoPadrao.RecebeBlinker(6,23);

            campoPadrao.ReviveCelula(4,23);

            campoPadrao.ReviveCelula(8,23);

            campoPadrao.ReviveCelula(3,25);

            campoPadrao.ReviveCelula(4,25);

            campoPadrao.ReviveCelula(8,25);

            campoPadrao.ReviveCelula(9,25);

            campoPadrao.RecebeBlock(6,36);

            campoPadrao.ImprimeMatriz();


            cout << endl;
            cout << "Pressione \"1\" para iniciar:  ";
            cin >> BotaoContinua;

            while(BotaoContinua != 1)
            {

                cout << "Pressione \"1\" para iniciar:  ";
                cin >> BotaoContinua;

            }

            system("clear||cls");

            do
            {

                campoPadrao.CicloDeVida();

                Geracao++;

                if(Geracao == NumGeracoes)
                {

                    cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                    cin >> Parada;
                    while(Parada < 0 || Parada > 1){

                      cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                      cin >> Parada;

                    }
                    Geracao = 0;

                }

            }
            while(Parada);

        }
        else
        {


            if(NumLinha >= 40 && NumColuna >= 40)
            {

                Grade campoVariavel(NumLinha,NumColuna);

                campoVariavel.RecebeBlock(8,2);

                campoVariavel.RecebeBlinker(8,12);

                campoVariavel.ReviveCelula(6,12);

                campoVariavel.ReviveCelula(10,12);

                campoVariavel.ReviveCelula(5,13);


                campoVariavel.ReviveCelula(11,13);


                campoVariavel.ReviveCelula(5,14);


                campoVariavel.ReviveCelula(11,14);


                campoVariavel.ReviveCelula(8,15);


                campoVariavel.ReviveCelula(6,16);


                campoVariavel.ReviveCelula(10,16);

                campoVariavel.RecebeBlinker(8,18);

                campoVariavel.ReviveCelula(8,18);

                campoVariavel.RecebeBlinker(6,22);

                campoVariavel.RecebeBlinker(6,23);

                campoVariavel.ReviveCelula(4,23);

                campoVariavel.ReviveCelula(8,23);

                campoVariavel.ReviveCelula(3,25);

                campoVariavel.ReviveCelula(4,25);

                campoVariavel.ReviveCelula(8,25);

                campoVariavel.ReviveCelula(9,25);

                campoVariavel.RecebeBlock(6,36);

                campoVariavel.ImprimeMatriz();

                cout << endl;
                cout << "Pressione \"1\" para iniciar:  ";
                cin >> BotaoContinua;

                while(BotaoContinua != 1)
                {

                    cout << "Pressione \"1\" para iniciar:  ";
                    cin >> BotaoContinua;

                }

                system("clear||cls");

                do
                {

                    campoVariavel.CicloDeVida();

                    Geracao++;

                    if(Geracao == NumGeracoes)
                    {

                        cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                        cin >> Parada;
                        while(Parada < 0 || Parada > 1){

                          cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                          cin >> Parada;
                          while(Parada < 0 || Parada > 1){

                            cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                            cin >> Parada;

                          }

                        }
                        Geracao = 0;

                    }

                }while(Parada);

            }
            else
            {

                cout << "Campo requer Espaço para a Gosper glider gun" << endl;

                sleep(3);

            }

        }

    }
    else if(ModoDeJogo == 2)
    {

        if(TamanhoMatriz == 1)
        {

            campoPadrao.ReviveCelula();



            do
            {

                campoPadrao.CicloDeVida();

                Geracao++;

                if(Geracao == NumGeracoes)
                {

                    cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                    cin >> Parada;
                    while(Parada < 0 || Parada > 1){

                      cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                      cin >> Parada;
                      while(Parada < 0 || Parada > 1){

                        cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                        cin >> Parada;

                      }

                    }
                    Geracao = 0;

                }

            }
            while(Parada);

        }
        else if(TamanhoMatriz == 2)
        {

            Grade campoVariavel(NumLinha , NumColuna);

            campoVariavel.ReviveCelula();

            do
            {

                campoVariavel.CicloDeVida();

                Geracao++;

                if(Geracao == NumGeracoes)
                {

                    cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                    cin >> Parada;
                    while(Parada < 0 || Parada > 1){

                      cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                      cin >> Parada;
                      while(Parada < 0 || Parada > 1){

                        cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                        cin >> Parada;

                      }

                    }
                    Geracao = 0;

                }

            }while(Parada);

        }

    }else if(ModoDeJogo == 3){
if(TamanhoMatriz == 1){

campoPadrao.RecebeBlock();

system("clear||cls");
cout << endl;
cout << "Pressione \"1\" para iniciar:  ";
cin >> BotaoContinua;

while(BotaoContinua != 1)
{

    cout << "Pressione \"1\" para iniciar:  ";
    cin >> BotaoContinua;

}

system("clear||cls");


do
{

    campoPadrao.CicloDeVida();

    Geracao++;

    if(Geracao == NumGeracoes)
    {

        cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
        cin >> Parada;
        while(Parada < 0 || Parada > 1){

          cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
          cin >> Parada;

        }
        Geracao = 0;

    }

}while(Parada);




}else if(TamanhoMatriz == 2){

Grade campoVariavel(NumLinha , NumColuna);


  campoVariavel.RecebeBlock();

  system("clear||cls");
  cout << endl;
  cout << "Pressione \"1\" para iniciar:  ";
  cin >> BotaoContinua;

  while(BotaoContinua != 1)
  {

      cout << "Pressione \"1\" para iniciar:  ";
      cin >> BotaoContinua;

  }

  system("clear||cls");

  do
  {

      campoVariavel.CicloDeVida();

      Geracao++;

      if(Geracao == NumGeracoes)
      {

          cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
          cin >> Parada;
          while(Parada < 0 || Parada > 1){

            cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
            cin >> Parada;
            while(Parada < 0 || Parada > 1){

              cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
              cin >> Parada;

            }

          }
          Geracao = 0;

      }

  }while(Parada);


}


    }else if(ModoDeJogo == 4){


      if(TamanhoMatriz == 1){

      campoPadrao.RecebeBlinker();

      system("clear||cls");
      cout << endl;
      cout << "Pressione \"1\" para iniciar:  ";
      cin >> BotaoContinua;

      while(BotaoContinua != 1)
      {

          cout << "Pressione \"1\" para iniciar:  ";
          cin >> BotaoContinua;

      }

      system("clear||cls");

      do
      {

          campoPadrao.CicloDeVida();

          Geracao++;

          if(Geracao == NumGeracoes)
          {

              cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
              cin >> Parada;
              while(Parada < 0 || Parada > 1){

                cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                cin >> Parada;

              }
              Geracao = 0;

          }

      }while(Parada);




      }else if(TamanhoMatriz == 2){

      Grade campoVariavel(NumLinha , NumColuna);


        campoVariavel.RecebeBlinker();

        system("clear||cls");
        cout << endl;
        cout << "Pressione \"1\" para iniciar:  ";
        cin >> BotaoContinua;

        while(BotaoContinua != 1)
        {

            cout << "Pressione \"1\" para iniciar:  ";
            cin >> BotaoContinua;

        }

        system("clear||cls");

        do
        {

            campoVariavel.CicloDeVida();

            Geracao++;

            if(Geracao == NumGeracoes)
            {

                cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                cin >> Parada;
                while(Parada < 0 || Parada > 1){

                  cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                  cin >> Parada;
                  while(Parada < 0 || Parada > 1){

                    cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                    cin >> Parada;

                  }

                }
                Geracao = 0;

            }

        }while(Parada);


    }
  }else if(ModoDeJogo == 5){

    if(TamanhoMatriz == 1){

    campoPadrao.RecebeGlider();

    system("clear||cls");
    cout << endl;
    cout << "Pressione \"1\" para iniciar:  ";
    cin >> BotaoContinua;

    while(BotaoContinua != 1)
    {

        cout << "Pressione \"1\" para iniciar:  ";
        cin >> BotaoContinua;

    }

    system("clear||cls");

    do
    {

        campoPadrao.CicloDeVida();

        Geracao++;

        if(Geracao == NumGeracoes)
        {

            cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
            cin >> Parada;
            while(Parada < 0 || Parada > 1){

              cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
              cin >> Parada;
              while(Parada < 0 || Parada > 1){

                cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                cin >> Parada;
                while(Parada < 0 || Parada > 1){

                  cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                  cin >> Parada;

                }

              }

            }
            Geracao = 0;

        }

    }while(Parada);




    }else if(TamanhoMatriz == 2){

    Grade campoVariavel(NumLinha , NumColuna);


      campoVariavel.RecebeGlider();

      system("clear||cls");
      cout << endl;
      cout << "Pressione \"1\" para iniciar:  ";
      cin >> BotaoContinua;

      while(BotaoContinua != 1)
      {

          cout << "Pressione \"1\" para iniciar:  ";
          cin >> BotaoContinua;

      }

      system("clear||cls");

      do
      {

          campoVariavel.CicloDeVida();

          Geracao++;

          if(Geracao == NumGeracoes)
          {

              cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
              cin >> Parada;
              while(Parada < 0 || Parada > 1){

                cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                cin >> Parada;
                while(Parada < 0 || Parada > 1){

                  cout << "Para parar digite \"0\" para Continuar digite \"1\": " ;
                  cin >> Parada;

                }

              }
              Geracao = 0;

          }

      }while(Parada);





  }

}


    system("clear||cls");

    cout << "FIM DE JOGO!!" << endl;
    cout << ":)" << endl;
    cout << endl;

    return 0;
}
