#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the guess";
     cin>>n;
    while(n<1 || n>9)
    {
        cout<<"Try again"<<endl;
        cin>>n;
        
    }
      if(n>=1 || n<=9)
    {
        cout<<"Well guessed"<<endl;
    }
    
    return 0;
    
}