#include<iostream>
using namespace std;
int main(){
    cout<<"The numbers which are divisible by 8 are:";
    for(int i=1000;i<=2000;i++)
    {
        
        if(i%8==0)cout<<i<<endl;
        
    }
    cout<<"The numbers which are divisible by 5 are:"<< " " <<endl;
    for(int j=1000;j<=2000;j++)
    {
        
        if(j%5==0)cout<<j<<endl;
        
    }
    return 0;
}