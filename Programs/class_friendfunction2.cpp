
//overloading of + operator
#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    friend void fun(A,B);
};
class B
{
private:
    int b;
public:
    void setData(int x)
    {
        b=x;
    }
    friend void fun(A,B);
};
void fun(A o1,B o2)
{
    cout<<"sum is "<<o1.a+o2.b;
}
int main()
{
    A obj1;
    obj1.setData(3);
    B obj2;
    obj2.setData(4);
    fun(obj1,obj2);
}

