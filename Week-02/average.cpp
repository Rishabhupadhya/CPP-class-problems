#include<iostream>
using namespace std;
int main(){
    int num,avg=0,t,sum=0;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cin>>t;
        sum+=t;
        if(t<0)
        continue;
    }
    
    goto avg;
avg:
avg=sum/num;
    cout<<avg;
    return 0;
}