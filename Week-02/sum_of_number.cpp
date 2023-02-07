#include<iostream>
using namespace std;
int main(){
    int num;
   int sum=0;
    for(int i=0;i<=num;i++)
    {
        cin>>num;
        
            if(num<0)
            break;
            sum+=num;
    }
    cout<<sum<<endl;
    
    return 0;
}