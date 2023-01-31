#include <iostream>
using namespace std;
void min(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&a<c){
        cout<<a<<endl;
    }
    else if(b<a &&b<c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}

int main(){
    min();

    return 0;
}
