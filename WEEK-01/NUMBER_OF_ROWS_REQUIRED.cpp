#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<<"no of rows required";
    cin>>n;
    for (i=0;i<n;i++){
        for (j=0;j<n-i;j++){
            cout<<n-i;
        }
        cout<<endl;
    }

    return 0;
}