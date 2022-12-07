#include "drone.h"
#include <iostream>

using namespace std;
drone::drone()
{
    id = NULL;
}

drone::~drone()
{
    //dtor
}

void drone::DisplayID()
{
    cout << "Drone ID: " << id << endl;
}

