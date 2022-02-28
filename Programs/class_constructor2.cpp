//constructor resolve the problem of initialization::
#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(int x,int y)
    {
        a=x;b=y;
    }
    Complex(int k)
    {
        a=k;
    }
    Complex(Complex &c)
    {
        a=c.a;
        b=c.b;
    }

};
int main()
{
    Complex c1(3,4),c2,c3(5);
  //  Complex c1=Complex(3,4),c2=Complex(5);
  // Complex c2=5
    Complex c4(c1);
    return 0;
}

