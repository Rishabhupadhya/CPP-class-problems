#include<iostream>
using namespace std;
int main (){
    int n1,n2,num;
    cout<<" MENU: 1.Addition 2.subtraction 3.multiplication 4.division 5.modulus ";
    cin>>num;
    cout<<"Enter two Numbers";
    cin>>n1>>n2;
    switch (num)
    {
        case 1: cout<<n1+n2;
        break;
        case 2:cout<<n1-n2;
        break;
        case 3:cout<<n1*n2;
        break;
        case 4:cout<<n1/n2;
        break;
        case 5:cout<<n1%n2;
        break;
    
    default:cout<<"INVALID INPUT";
        break;
        
    }
    return 0;
}