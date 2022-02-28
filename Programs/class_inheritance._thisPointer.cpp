#include<iostream>
using namespace std;
class box
{
private:
    int l,b,h;
public:
    void setDimension(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void showDimension()
    {
        cout<<l<<b<<h;
    }
};
int main()
{
    box smallBOX;
    smallBOX.setDimension(3,4,5);
    smallBOX.showDimension();
    return 0
}
