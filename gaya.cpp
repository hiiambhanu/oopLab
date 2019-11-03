#include <iostream>
using namespace std;
class tollbooth
{
    unsigned int car;
    double amt;

public:
    tollbooth()
    {
        car = 0;
        amt = 0;
    }
    void payingcar()
    {
        cout << "enter the amount of toll\n";
        cin >> amt;
        car++;
        amt = amt + 0.50;
    }
    void nopayingcar()
    {
        car++;
    }
    void display()
    {
        cout << "Total cars: " << car;
        cout << "Total amount: " << amt;
    }
};
int main()
{
    int ch;
    char c;
    tollbooth t;
    do
    {
        cout << "1.paying\n2.nopaying\n3.display\n4.exit\n";
        cout << "Enter choice \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            // cout<<"1";
            t.payingcar();
            cout << "car added\n";
            break;
        case 2:
            t.nopayingcar();
            cout << "car added\n";
            break;
        case 3:
            t.display();
            break;
        case 4:
            return 0;
        }
        cout << "\n Do you want to continue";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    return 0;
}