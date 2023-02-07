#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num%2==0){
goto even;
even: 
    cout<<"The number entered is even"<<endl;
    }
    else {
     goto odd;
     odd:   
    cout<<"The number entered is odd"<<endl;
    }
    return 0;
}