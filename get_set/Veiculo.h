#include <iostream>


class Veiculo{
    public:
        
        int tipo;
        Veiculo(int tp){
            if(tp == 1){
                this->name = "carro";
                this->velMax = 250;
            }if(tp ==2){
                this->name ="aviao";
                this->velMax = 800;
            }if(tp == 3){
                this->name = "navio";
                this->velMax = 120;
            }
        }
        std::string getName(){
            return this->name;            
        }


        int getVelMax(){
            return this->velMax;
        }

        void setVelMax(int vm){
            this->velMax = vm;
        }
    private:
        std::string name;
        int vel;
        bool ligado;
        int velMax;
};
