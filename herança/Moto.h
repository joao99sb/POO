#include"Veiculo.h"

class Moto:public Veiculo{
    public:
    Moto(){
        this->vel = 0;
        this->rodas = 2;
        this->blindagem = 0;
        this->setTipo(1);
        this->setVelMax(120);
        this->setArma(false);
    }
};