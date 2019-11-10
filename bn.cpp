#include<iostream>
#include<fstream>
using namespace std;

class student{
    int rn, marks;
    char name[30];
    public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> rn;
        cout << "Enter marks: ";
        cin >> marks;
    }
};

int main()
{
    int m;
    fstream f;
    f.open("Student.dat",ios::binary|ios::out);
    cout << "Enter number of students: ";
    cin >> m;
    student st[m];
    for(int i=0;i<m;i++)
    {
        st[i].getData();
        f.write((char *)&st[i], sizeof(st[i]));
    }
    f.close();
    return 0;
}