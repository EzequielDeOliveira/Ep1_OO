#ifndef BLINKER_HPP
#define BLINKER_HPP
#include "formagenerica.hpp"

class Blinker : public FormaGenerica
{

private:

    char ** Matriz;

public:

    Blinker();
    ~Blinker();

    void PassaMatriz(char ** Matriz, int LinhaInicial, int ColunaInicial);





};


#endif
