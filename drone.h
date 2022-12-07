#ifndef DRONE_H
#define DRONE_H


class drone
{
    public:
        drone();
        virtual ~drone();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        int Gettype() { return type; }
        void Settype(int val) { type = val; }

        drone * Getnext(){return next;}
        void Setnext(drone *n){next=n;}

        void DisplayID();



    private:
        int id;
        int type;
        drone * next;
};

#endif // DRONE_H
