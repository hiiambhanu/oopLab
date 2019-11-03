#include <iostream>
using namespace std;
class phone
{
    int areacode;
    int exchange;
    int number;

public:
    phone(){
        areacode=0;
    }
    phone(int a, int b, int c);
    void display();
    void putdata()
    {
        cout << "enter the area code\n";
        cin >> areacode;
        cout << "enter the exchange\n";
        cin >> exchange;
        cout << "enter the number\n";
        cin >> number;
        cout << "number is\n";
        cout << "(" << areacode << ")"
             << " " << exchange << "-" << number << "\n";
    }
};
phone::phone(int a, int b, int c)
{
    areacode = a;
    exchange = b;
    number = c;
}
void phone::display()
{
    cout << areacode << exchange << number << "\n";
}
int main()
{
    phone t;
    t.putdata();
    phone d(212, 717, 8900);
    d.display();
    return 0;
}