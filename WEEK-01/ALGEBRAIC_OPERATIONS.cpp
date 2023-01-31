#include <iostream>
using namespace std;
int main(){
    int option,num1,num2;
    cout<<"MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>option;
    if (option>=1 && option<=5){
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;}
    switch (option)
    {
        
    case 1: cout<<"Addition of two numbers are"<<" "<<num1+num2;
        break;
    case 2:  cout<<"Subtraction of two numbers are"<<" "<<num1-num2;
    break;
    case 3: cout<<"Multiplication of two numbers are"<<" "<<num1*num2;
    break;
    case 4: cout<<"Division of two numbers are"<<" "<<num1/num2;
    break;
    case 5: cout<<"Modulus of two numbers are"<<" "<< num1%num2;
    break;
    default: cout<<"Invalid input"<<endl;
    break;
    }
    return 0;
    
}