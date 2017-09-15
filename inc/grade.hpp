#ifndef GRADE_HPP
#define GRADE_HPP
#include <stdlib.h>
#include "formagenerica.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

using namespace std;

class Grade : public FormaGenerica{

    private:
       char **Matriz;
        int CoordenadaX;
        int CoordenadaY;
        Block FormaBlock;
        Blinker FormaBliker;
        Glider FormaGlider;



    public:

        Grade();
        Grade(int NumLinha, int NumColuna);
        ~Grade();

        int  getCoordenadaX();
        void setCoordenadaX(int CoordenadaX);

        int  getCoordenadaY();
        void setCoordenadaY(int CoordenadaY);

        void ReviveCelula();
        void ImprimeMatriz();


};




#endif
