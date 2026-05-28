#include<iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5};
    int sum=0;
    int n=sizeof(A)/sizeof(A[0]);

    for (auto i:A)
    {
        sum+=i;
    }
    cout<<"sum :"<<sum<<endl;

    cout<<"Avg :"<<sum/n<<endl;
    return 0;
}
