#include "spydrone.h"
#include <iostream>
using namespace std;

spydrone::spydrone()
{
    type=1;

}

spydrone::~spydrone()
{
    //dtor
}

void spydrone::Display()
{
    cout << "This drone is a spy drone" << endl << "camera type: " << cameratype  << endl;
}

