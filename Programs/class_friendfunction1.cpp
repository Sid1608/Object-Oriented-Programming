

//overloading of + operator
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
public:
   void set_data(int x,int y)
   {a=x;b=y;}
   void show_data()
   {cout<<a<<" "<<b;}
   friend void fun(Complex);

};
void fun(Complex c)
{
    cout<<"sum is"<<c.a+c.b;
}

int main()
{
    Complex c1;
    c1.set_data(3,4);
    fun(c1);
    return 0;
}
