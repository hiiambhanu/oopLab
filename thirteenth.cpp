#include<iostream>
using namespace std;
class father{
    protected:
    int age;
    public:
    father(){
        ;
    }
    father(int x){
        age = x;
    }
    virtual void iam(){
        cout<<"I am the father, my age is:  "<<age<<endl;
    }
};

class son: public father{

    public:
    son(int x){ 
        age = x;
    }

    void iam(){
        cout<<"I am the son, my age is:  "<<age<<endl;
    }

};

class daughter: public father{

    public:
    daughter(int x){ 
        age = x;
    }

    void iam(){
        cout<<"I am the daughter, my age is:  "<<age<<endl;
    }

};

int main(){

    father a(68);
    father * ptr = &a;
    son b(24);
    daughter c(16);
    a.iam();
    b.iam();
    c.iam();
    ptr->iam();
    ptr = &b;
    ptr->iam();
    ptr = &c;
    ptr->iam();

    return 0;
}