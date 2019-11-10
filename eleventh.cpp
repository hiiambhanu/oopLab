#include<iostream>
using namespace std;
class complex{
    int real;
    int im;
    public:
    complex(){
        real = im = 0;
    }
    complex(int real, int im){
        this->real = real;
        this->im = im;
    }
    void init(){
        cout<<"Enter the real and imaginary parts ";
        cin>>real>>im;
    }

    void display(){
        cout<<real<<"+ i"<<im<<endl;
    }

    complex operator+(complex b){
        return (complex(real + b.real, im+b.im));
    }

};

int main(){
    complex c1, c2(5, 3);
    c1.init();
    complex c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
}