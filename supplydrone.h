#ifndef SUPPLYDRONE_H
#define SUPPLYDRONE_H
#include <random>
#include <ctime>
#include <iostream>

#include <drone.h>


class supplydrone : public drone
{
    public:
        supplydrone();
        virtual ~supplydrone();

        int Getweight() { return weight; }
        void Setweight(int val) { weight = val; }
        int Gettype() { return type; }
        void Settype(int val) { type = val; }

        void Display();

    private:
        int weight;
        int type;
};

#endif // SUPPLYDRONE_H
