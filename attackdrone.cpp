#include "attackdrone.h"
#include <iostream>
using namespace std;
attackdrone::attackdrone()
{
    type =3;

}

attackdrone::~attackdrone()
{
    //dtor
}

void attackdrone::Display()
{
    cout << "This drone is an attack drone" << endl << "weapon: " << weapon << endl;
}
