#include <iostream>
#include "drone.h"
#include "attackdrone.h"
#include "supplydrone.h"
#include "spydrone.h"
#include <random>
#include <ctime>


using namespace std;
int DroneGen(default_random_engine *gptr);
int menu();

int main()
{


    //going to do this all without using linked list, same as DND project at end of course. - Cody
    default_random_engine * gptr;
    gptr = new default_random_engine(time(NULL));

    uniform_int_distribution<int> randomFeatures(1,3);
    int SpyDroneAm = DroneGen(gptr);
    int SupplyDroneAm= DroneGen(gptr);
    int AttackDroneAm= DroneGen(gptr);
    int totaldrones = SpyDroneAm+SupplyDroneAm+AttackDroneAm;




   spydrone sdrones[SpyDroneAm];
   // creating an array of size generated randomly amount of drones for spy drones and assigning them random traits
    for(int i=0; i<SpyDroneAm; i++)
    {
        sdrones[i].Setid(i);
        int temp = randomFeatures(*gptr);
        if(temp==1)
        {
            sdrones[i].Setcameratype('O');
        }
        else if(temp==2)
        {
            sdrones[i].Setcameratype('I');
        }
        else if(temp==3)
        {
            sdrones[i].Setcameratype('M');
        }
    }

    supplydrone supdrones[SupplyDroneAm]; // same as above
    for(int i=0; i<SupplyDroneAm; i++)
    {
        supdrones[i].Setid(i);
        int temp = randomFeatures(*gptr);
        if(temp==1)
        {
            supdrones[i].Setweight(10);
        }
        else if(temp==2)
        {
            supdrones[i].Setweight(25);
        }
        else if(temp==3)
        {
            supdrones[i].Setweight(40);
        }
    }

    attackdrone adrones[AttackDroneAm]; // same as above
    for(int i=0; i<AttackDroneAm; i++)
    {
        adrones[i].Setid(i);
        int temp = randomFeatures(*gptr);
        if(temp==1)
        {
            adrones[i].Setweapon('R');
        }
        else if(temp==2)
        {
            adrones[i].Setweapon('M');
        }
        else if(temp==3)
        {
            adrones[i].Setweapon('L');
        }

    }


    // so now we have a random amount of each type of drone generated with each having their own random characteristics
    // now we will launch the menu and make the functions to carry out these fairly simple steps


    cout << "drone unit management" << endl;
    int input = 50;
    while(input!=9)
    {
    input = menu();
    switch(input)
    {
    case 0: // displaying all drones
        {
            for(int i=0; i<SpyDroneAm; i++) // loops through displaying all spy drones and all of the spy drone IDs
            {
                sdrones[i].DisplayID();
                sdrones[i].Display();
                cout << endl;
            }
            for(int i=0; i<SupplyDroneAm; i++) // loops through displaying all of the supply drones and the Supply Drones IDs
            {
                supdrones[i].DisplayID();
                supdrones[i].Display();
                cout << endl;
            }
            for(int i=0; i<AttackDroneAm; i++) // loops through displaying all of the attack drones and the attack done IDs
            {
                adrones[i].DisplayID(); // comes from drone.cpp file as they are linked
                adrones[i].Display();
                cout << endl;
            }
        }break;
    case 1:
        {
            cout <<"You have selected to add a spy drone" << endl << "please enter a camera type to be added: O, I, or M: ";
            char tempinput;
            cin >> tempinput;
            sdrones[SpyDroneAm].Setcameratype(tempinput);
            sdrones[SpyDroneAm].Setid(SpyDroneAm);
            SpyDroneAm=SpyDroneAm+1;

        }break;
    case 2:
        {
            cout <<"You have selected to add a supply drone" << endl << "please enter a weight to be added: 10, 25, or 40: ";
            int tempinput;
            cin >> tempinput;
            supdrones[SupplyDroneAm].Setweight(tempinput);
            supdrones[SupplyDroneAm].Setid(SupplyDroneAm);
            SupplyDroneAm=SupplyDroneAm+1;
        }break;
    case 3:
        {
            cout <<"You have selected to add an attack drone" << endl << "please enter a weapon type to be added: R, M, or L: ";
            char tempinput;
            cin >> tempinput;
            adrones[AttackDroneAm].Setweapon(tempinput);
            adrones[AttackDroneAm].Setid(AttackDroneAm);
            AttackDroneAm=AttackDroneAm+1;
        }break;

    }
    }

    return 0;
}

int DroneGen(default_random_engine *gptr)
{
    uniform_int_distribution<int> DroneAmountDist(3,6); // 3-6 drones per category, im sure the government has more but its fine
    int r = (int)DroneAmountDist(*gptr);
    return r;
}

int menu() // menu
{
    cout<<"0) Display all current drones"<<endl;
    cout<<"1) Add a spy drone"<<endl;
    cout<<"2) Add a supply drone"<<endl;
    cout<<"3) Add an attack drone"<<endl;
    cout<<"9) Exit"<<endl << endl;
    int option;
    cin>>option;
    return option;
}
