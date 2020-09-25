#include"Veiculo.h"

class Navio:public Veiculo{
    public:
    Navio(){
        this->vel = 0;
        this->rodas = 0;
        this->blindagem = 88;
        this->setTipo(3);
        this->setVelMax(80);
        this->setArma(true);
    }
       
};