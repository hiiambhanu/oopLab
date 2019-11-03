#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    int op1, op2;
    char opr;
    char choice;
    do{

        cout<<"Enter the two numbers and the operator ";
        cin>>op1>>op2>>opr;
        switch (opr)
        {
        case '+':
        cout<<"The sum is "<<op1+op2;
            break;
        case '-':
            cout<<"The difference is "<<op1-op2;
            break;
        case '*':
            cout<<"The product is "<<op1*op2;
            break;
        case '/':
                cout<<"The quotient is "<<(float)(op1)/(op2);
                break;
        default:
            cout<<"Incorrect operator entered \n";
            break;
        } 

        cout<<"Do you want to continue? ";
        cin>>choice;
    }while(toupper(choice)!='N');
    return 0;
    
}