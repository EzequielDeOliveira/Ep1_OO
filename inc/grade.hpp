#ifndef GRADE_HPP
#define GRADE_HPP

using namespace std;

class Grade {

    private:
        char **Matriz;
        int CoordenadaX;
        int CoordenadaY;
        int NumLinha;
        int NumColuna;
    

    public:
    
        Grade();
        Grade(int NumLinha, int NumColuna);
        ~Grade();
        int getNumLinha();
        int getNumColuna();
        int  getCoordenadaX();
        void setCoordenadaX(int CoordenadaX);
        int  getCoordenadaY();
        void setCoordenadaY(int CoordenadaY);
        void ReviveCelula();

};

        


#endif
