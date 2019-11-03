#include<iostream>
using namespace std;
class cont{
    static int count;
    public:
    cont(){
        count++;
    }
    ~cont(){
        count--;
    }
    void static showcount(){
        cout<<"The count is "<<count<<endl;
    }
};
int cont::count = 0;
int main(){

    cont a;
    a.showcount();
    cont b;
    b.showcount();
    a.~cont();
    b.showcount();

}