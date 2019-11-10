#include<iostream>
using namespace std;
long pow(double n, int p = 2){
    long temp = 1;
    for(int i = 1; i <= p ; i ++)    temp*= n;
    return temp;
}
int main(){
    cout<<pow(2,10)<<endl;
    cout<<pow(2);
}