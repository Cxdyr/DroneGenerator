#ifndef ATTACKDRONE_H
#define ATTACKDRONE_H

#include <drone.h>


class attackdrone : public drone
{
    public:
        attackdrone();
        virtual ~attackdrone();

        char Getweapon() { return weapon; }
        void Setweapon(char val) { weapon = val; }
        int Gettype() { return type; }
        void Settype(int val) { type = val; }

        void Display();

    private:
        char weapon;
        int type;
};

#endif // ATTACKDRONE_H
