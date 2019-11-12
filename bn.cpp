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

    void display(){
        cout<<"Name "<<name<<" Rno: "<<rn<<" Marks :"<<marks;
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
        student s;
        s.getData();
        f.write((char *)&s, sizeof(student));
    }
    f.close();


        ///// Reading data to display //////
    ifstream fin;
    fin.open("Student.dat");
    while(!fin.eof()){
        student s ;
         fin.read((char*)&s, sizeof(student));
        s.display();
    }

    fin.close();

    return 0;
}