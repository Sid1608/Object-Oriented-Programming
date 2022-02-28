
//overloading of unary operator->>require one operand:
//binary operator ->>require two operand::
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
public:
   void set_data(int x,int y)
   {a=x;b=y;}
   void show_data()
   {cout<<a<<" "<<b;}
   Complex operator -()
   {
       Complex temp;
       temp.a=-a;
       temp.b=-b;
       return temp;
   }
};

int main()
{
    Complex p,q;
    p.set_data(56,45);
    q=p.operator-();
    q.show_data();

    return 0;
}
