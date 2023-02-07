#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=100;i<=500;i++)
    {
        for( j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        cout<<i<<endl;
    }
    return 0;
}