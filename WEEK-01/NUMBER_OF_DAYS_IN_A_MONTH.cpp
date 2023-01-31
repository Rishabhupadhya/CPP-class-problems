#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int countletter=0,countnum=0;
    string str;
    cout<<"Enter the Name of the Month(first letter capital)"<<endl;
    getline(cin,str);
    if (str=="January" || str=="March" || str=="May" || str=="July" || str=="August" || str=="October" || str=="December" )cout<<"31";
    else if (str=="April" || str=="June" || str=="September" || str=="November")cout<<"30";
    else if (str=="Febuary" )cout<<"29";
    else cout<<"Invalid Input";
    
    return 0;
    
}