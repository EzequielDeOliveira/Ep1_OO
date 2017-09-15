#ifndef BLOCK_HPP
#define BLOCK_HPP
#include "formagenerica.hpp"

class Block : public FormaGenerica {

private:
   char **Matriz;


 public:

   Block();
  ~Block();

   void PassaMatriz(char ** Matriz, int LinhaInicial , int ColunaInicial);


};



#endif
