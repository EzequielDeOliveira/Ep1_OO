#include <iostream>
#include "grade.hpp"
#include "block.hpp"
#include "blinker.hpp"
#include "glider.hpp"

using namespace std;

int main(){
int a = 0;
//int b;
//while(1){

//cin >> a;
//Glider glider1(10,10);

//glider1.SelecionaForma(1);


//}

//lock block1;

//Blinker blinker1;

Grade grade1(5,5);

//grade1.RecebeBlock();

//grade1.RecebeGlider();
//grade1.RecebeBlinker();
//cin >> a >> b ;
grade1.ReviveCelula();
//grade1 = Grade(a,b);
while(a < 20){


grade1.CicloDeVida();

grade1.ImprimeMatriz();

a++;
}


return 0;
}
