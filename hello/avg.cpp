#include<iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5};
    int sum;

    for (auto i:A)
    {
        sum+=i;
    }
    cout<<"sum :"<<sum;
    return 0;
}