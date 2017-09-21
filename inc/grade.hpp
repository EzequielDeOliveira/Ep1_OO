#ifndef GRADE_HPP
#define GRADE_HPP
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"
#include <stdlib.h>
#include "formagenerica.hpp"


using namespace std;

class Grade : public FormaGenerica
{

private:
    char **Matriz;
    char **MatrizAux;
    int CoordenadaX;
    int CoordenadaY;
    Block block;
    Blinker blinker;
    Glider glider;

public:

    Grade();
    Grade(int NumLinha, int NumColuna);
    ~Grade();

    int  getCoordenadaX();
    void setCoordenadaX(int CoordenadaX);

    int  getCoordenadaY();
    void setCoordenadaY(int CoordenadaY);

    void ReviveCelula();
    void ReviveCelula(int linha,int coluna);
    void ImprimeMatriz();

    void RecebeBlock();
    void RecebeBlock(int linha,int coluna);
    void RecebeBlinker();
    void RecebeBlinker(int linha, int coluna);
    void RecebeGlider();

    int VerificaCelula(int NumLinha ,int NumColuna);
    void AtualizaCelula(int NumVizinho,int NumLinha , int NumColuna);
    void CicloDeVida();





};




#endif
