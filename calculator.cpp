#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    char op;

    
    //Input 
    cout<<"Enter a first number"<<endl;
    cin>>num1;
    cout<<"Enter operator(+,-,*,/)"<<endl;
    cin>>op;
    cout<<"Enter second operator"<<endl;
    cin>>num2;

    cout<<"----------------------------------------------"<<endl;

    if(op=='+'){
        cout<<"Result:"<<num1+num2<<endl;
    }
    else if(op=='-'){
        cout<<"Result:"<<num1-num2<<endl;

    }
    else if(op=='*'){
        cout<<"Result:"<<num1*num2<<endl;
    }
    else if(op=='/'){
        if(num2!=0)
        cout<<"Result:"<<num1+num2<<endl;
        else
        cout<<"Error:Division by zero!"<<endl;
        
    }
    else{
        cout<<"Invalid Operator"<<endl;
    }
    cout<<"---------------------------------------------"<<endl;
    }
