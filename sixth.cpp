#include<iostream>
#include <algorithm>  
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
class rational{
    int nr;
    int dr;
    public:
    rational(){
        nr = 0;
        dr = 1;
    }
    rational(int a, int b){
        nr = a;
        dr = b;
    }
    void reduce();
    rational operator +(rational a);
    friend ostream& operator <<(ostream &output, rational&a);
    friend istream& operator >>(istream  &input, rational&a);
};

void rational::reduce(){
    int cf = gcd(nr, dr);
    nr = nr / cf;
    dr = dr / cf;
}

rational rational::operator+(rational a){
    return rational(nr*a.dr + dr*a.nr, dr*a.dr);
}

ostream& operator<<(ostream &output, rational &a){
        output << a.nr << "/  " << a.dr;
        return output;            
}


istream& operator>>(istream &output, rational&a){
        cout<<"Enter nr and dr ";
        output >> a.nr >> a.dr;
        return output;            
}

int main(){
    rational first(2,4);
    cout<<first<<endl;
    first.reduce();
    cout<<first<<endl;
    rational second;
    cin>>second;
    cout<<second<<endl;
    rational third = first+second;
    cout<<third;
    return 0;
}


