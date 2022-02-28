
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
   Complex operator +(Complex c)
   {
       Complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
   }
};

int main()
{
    Complex p,q,r;
    p.set_data(56,45);
    q.set_data(34,35);
   // r=p.operator+(q);
    r=p+q;
    r.show_data();
    return 0;
}
