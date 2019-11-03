#include<bits/stdc++.h>
using namespace std;
class space
{
public:   
    int x;
    int y;
    space(int x, int y){
        this->x = x;
        this->y = y;
    }
    double distance(space a){
        return sqrt( pow((a.x-x), 2) + pow((a.y-y), 2) );
    }
};

class distances{
    public:
    double d; 
    char id;
    distances(){}
    void setd(double d, char id ){
        this->d = d;
        this->id = id;
    }
};

bool comp(distances a, distances b ){
    return (a.d < b.d);
}
int main()
{
    space o (0,0);
    space a (6,2);
    space b (13,11);
    space c (4,14);
    space d (3,8);
    space e (3,4);
    
    distances dist[5];
    dist[0].setd(o.distance(a),'a');
    dist[1].setd(o.distance(b),'b');
    dist[2].setd(o.distance(c),'c');
    dist[3].setd(o.distance(d),'d');
    dist[4].setd(o.distance(e),'e');

    sort(dist, dist+5, comp);

    for(int i = 0 ; i < 5; i++)
        cout<<dist[i].id<<endl;
    
    return 0;  
}