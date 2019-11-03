#include <iostream>
#include <string.h>
#include<stdio.h>

using namespace std;
void reverseit(char *p)
{
    int j = 0, i = 0, temp;
    j = strlen(p) - 1;
    while (i < j)
    {
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
        i++;
        j--;
    }
    cout << p << "\n";
}

int main()
{
    char str[50];
    int n;
    char ch;
    do
    {
        cout << "Reverse  of a String";
        cout << "\nEnter The String : ";
        gets(str);
        reverseit(str);
        cout << "Do You Want To Continue : ";
        cin >> ch;
    } while (ch != 'n');
    return 0;
}