#include<iostream>
#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
    private:
        int tipo;
        int velMax;
        bool arma;

    public:
        int vel;
        int blindagem;
        int rodas;
        void setVelMax(int n);
        void setTipo(int n);
        void setArma(bool n);
        bool getArma();
        int getVelMax();
         void imp();
};

void Veiculo::setTipo(int n ){
    this->tipo = n;
}

void Veiculo::setVelMax(int n){
    this->velMax = n;
}


void Veiculo::setArma(bool n){
    this->arma=n;
}
bool Veiculo::getArma(){
    return this->arma;
}
int Veiculo::getVelMax(){
    return this->velMax;
}

void Veiculo::imp(){
    std::cout
    <<"tipo do veiculo:.... "<<this->tipo<<"\n"
    <<"quantidade de rodas: "<<this->rodas<<"\n"
    <<"nivel de blindagem:. "<<this->blindagem<<"\n"
    <<"velocidade maxima:.. "<<this->velMax<<"\n"
    <<"armamento:.......... "<<this->arma<<"\n"
    <<".............................."<<"\n";

}


#endif // VEICULO_H_INCLUDED
