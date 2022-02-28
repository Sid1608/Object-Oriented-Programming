#include<iostream>
using namespace std;
template<class T1,class T2>
void copy(const T1 source[],T2 destination[],int size)
{
    for(int i=0;i<size;++i)
    {
        destination[i]=static_cast<T2>(source[i]);//safe casting
    }
}
int main()
{
    cout<<"template for sum()"<<endl;
    int a[]={1,2,3};
    double b[3];
    copy(a,b,3);
    for(int i=0;i<3;++i)
            cout<<b[i]<<" ";
    return 0;
}

