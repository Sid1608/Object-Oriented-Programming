#include<bits/stdc++.h>
using namespace std;
class A
{
private:
    int a;
protected:
    void setValue(int k)
    { a=k;   }
    void showValue()
    {
        cout<<a;
    }

};
class B: private A
{
public:
    void setData(int x)
    {setValue(x);}
    void showData()
    {showValue();}
};
int main()
{
    B obj;
    obj.setData(4);
    obj.showData();
    return 0;
}
