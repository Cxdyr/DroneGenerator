#ifndef SPYDRONE_H
#define SPYDRONE_H

#include <drone.h>


class spydrone : public drone
{
    public:
        spydrone();
        virtual ~spydrone();

        char Getcameratype() { return cameratype; }
        void Setcameratype(char val) { cameratype = val; }
        int Gettype() { return type; }
        void Settype(int val) { type = val; }

        void Display();


    private:
        char cameratype;
        int type;
};

#endif // SPYDRONE_H
