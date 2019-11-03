#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
int main(){
    point a, b, c;
    cout<<"Enter the x and y coordinates of the first 2 points ";
    cin>>a.x>>a.y>>b.x>>b.y;
    c.x = a.x+b.x;
    c.y = a.y+b.y;
    cout<<"The third point is :"<<"x coordinate :"<<c.x<<" y coordinate : "<<c.y;
    return 0;
}