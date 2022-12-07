#include "supplydrone.h"
#include <iostream>
using namespace std;
supplydrone::supplydrone()
{
    type=2;
    weight = 0;
}

supplydrone::~supplydrone()
{
    //dtor
}

void supplydrone::Display()
{
    cout << "this drone is a supply drone" << endl <<"weight: " << weight << endl;
}
