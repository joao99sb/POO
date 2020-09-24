#include<iostream>
#include"Veiculo.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Veiculo *v1 = new Veiculo(1);

    cout<<v1->getVelMax();

    v1->setVelMax(100);
    cout<<endl<<v1->getVelMax();

    return 0;
}
