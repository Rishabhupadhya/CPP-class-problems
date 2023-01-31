#include <iostream>
#include <string.h>
using namespace std;

void revstring(string str,int n){
    while(n--){
        cout<<str[n];
    }
}
int main(){
    string str;
    int n;
    cin>>str;
    n = str.length();
    revstring(str,n);
    return 0;
}