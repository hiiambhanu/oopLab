#include<iostream>
using namespace std;
class Employee{
    protected:
    char name[50];
    long salary;
};
class Manager: public Employee{
    char department[50];
    public:
    void show();
};
void Manager::show(){
    cout<<"Name: ";
    puts(name);
    cout<<"\n Salary: "<<salary<<"\n Department: "<<department;
} 

class Executive : public Manager{
    public:
    void display(){
        cout<<"Executive :"<<endl;
        show();
    }
};

int main(){
    
    return 0;
}