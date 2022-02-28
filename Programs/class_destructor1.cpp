
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
public:
    ~Complex()
    {

        cout<<"destructor";
    }
};
void fun()
{
    Complex obj;
}
int main()
{
    fun();
    return 0;
}
