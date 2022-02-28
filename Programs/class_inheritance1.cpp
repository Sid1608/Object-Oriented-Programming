#include<bits/stdc++.h>
using namespace std;
class car
{
private:
    int gear;
protected:
    void incrementGear()
    {
        if(gear<5)
            gear++;
    }
};
class sportsCar: public car
{

};
int main()
{
    sportsCar o;
    o.incrementGear();
    return 0;
}
