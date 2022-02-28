
//overloading of unary operator ++(pre and post)

//overloading of + operator
#include<bits/stdc++.h>
using namespace std;
class integer{
private:
    int x;
public:
    void setData(int a)
     {x=a;}
    void showData()
    {
         cout<<"x= "<<x;
    }
    integer operator ++()
    {
        integer i;
        i.x=++x;
        return i;
    }
    integer operator ++(int)
    {
        integer i;
        i.x=x++;
        return i;
    }
};

int main()
{
    integer i1,i2,i3;
    i1.setData(3);
    i1.showData();
    i2=++i1;
    i2.showData();
    i3=i1++;//i3=i1.operator ++()
    i3.showData();
    return 0;
}
