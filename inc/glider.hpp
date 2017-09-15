#ifndef GLIDER_HPP
#define GLIDER_HPP
#include "formagenerica.hpp"

class Glider : public FormaGenerica {
private:
  char **Matriz;

public:
Glider();
~Glider();

void SelecionaForma(int forma);


};


#endif
