#include <iostream>
#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

using namespace std;

int main(){
//int a;
//int b;
//while(1){

//cin >> a;
//Glider glider1;

//glider1.SelecionaForma(1);


//}

//lock block1;

//Blinker blinker1;

Grade grade1(10,10);

//grade1.RecebeBlock();

grade1.RecebeGlider();
//grade1.RecebeBlinker();
//cin >> a >> b ;

//grade1 = Grade(a,b);

grade1.ImprimeMatriz();

return 0;
}
