// class of complex no.
#include<bits/stdc++.h>
using namespace std;
/*struct Complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
};
*/
/*class Complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
};
*/
class Complex
{
    int a,b;
public:
    void set_data(int,int);
    void show_data()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
};
//add membership label::
void Complex:: set_data(int x,int y)
{
    a=x;b=y;
}
int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    return 0;
}
