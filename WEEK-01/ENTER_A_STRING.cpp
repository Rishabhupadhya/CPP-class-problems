
#include <iostream>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>str;
    n = str.length();
    while(n--){
        cout<<str[n];
    }
    return 0;
}
