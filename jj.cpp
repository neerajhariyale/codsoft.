#include<iostream> 
#include<string>
using namespace std; 
int main(){ 
    char oper; 
    int num1,num2; 
    cout<<"Enter the opertor :"; 
    cin>>oper; 
 
    cout<<"Enter two Numbers :"; 
    cin>>num1 >> num2; 
 
    switch(oper){ 
        case '+':cout << num1 <<"+"<<num2 <<"=" <<num1+num2; 
        break; 
        case '-':cout << num1 <<"-"<<num2 <<"=" <<num1-num2; 
        break; 
        case '*':cout << num1 <<"*"<<num2 <<"=" <<num1*num2; 
        break; 
        case '/':cout << num1 <<"/"<<num2 <<"=" <<num1/num2; 
        break; 
        default:cout<<"no operators"; 
        break; 
 
 
    } 
}