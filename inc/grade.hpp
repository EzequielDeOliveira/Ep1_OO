#ifndef GRADE_HPP
#define GRADE_HPP
#include "block.hpp"
#include <stdlib.h>
#include "formagenerica.hpp"


using namespace std;

class Grade : public FormaGenerica{

    private:
       char **Matriz;
        int CoordenadaX;
        int CoordenadaY;
        Block block1;



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

        void RecebeBlock();





};




#endif
