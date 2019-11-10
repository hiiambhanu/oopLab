#include<iostream>
#include<stdio.h>
using namespace std;
class Employee{
    protected:
    char name[50];
    long salary;
};
class Manager: public Employee{
    char department[50];
    public:
    void get(){
        cout<<"Enter the name ";
        cin>>name;
        cout<<"Enter the department ";
        cin>>department;
        cout<<"Enter the salary ";
        cin>>salary;
    }
    void show();
};
void Manager::show(){
    cout<<"Name: ";
    puts(name);
    cout<<"\nSalary: "<<salary<<"\nDepartment: "<<department<<endl;
} 

class Executive : public Manager{
    public:
    void display(){
        cout<<"Executive :"<<endl;
        show();
    }
};

int main(){
    
    Manager m1;
    m1.get();
    m1.show();
    Executive e1;
    e1.get();
    e1.display();

    

}