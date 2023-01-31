#include <iostream>

using namespace std;

int main()
{
    int m,n,sum;
    cout<<"Enter first number ";
    cin>>m;
    cout<<"Enter second number ";
    cin>>n;
    sum=m+n;
    if (sum>=105 && sum<=200){
        cout<<200;
    }
    else{
        cout<<sum;
    }

    return 0;
}
