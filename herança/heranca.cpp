#include <iostream>
#include "Navio.h"
#include "Moto.h"
using namespace std;

int main(){

    Navio *n1 = new Navio();
    Moto *n2 = new Moto();

    n1->imp();
    cout<<"\n";
    n2->imp();



    return 0;
}
