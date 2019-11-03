#include<iostream>
using namespace std;
class DB;
class DM{
    int m;
    int cm;
    public :
    DM(){
        m = cm = 0;
    }
    DM(int a, int b ){
        m = a;
        cm = b;
    }
    void display(){
        cout<<"m "<<m<<" cm "<<cm<<endl;
    }
    friend DM add(DM a, DB b);
    friend DB add(DB a, DM b);

};
class DB{
    int ft;
    int in;
    public :
    DB(){
        ft = in = 0;
    }
    DB(int a  , int b  ){
        ft = a;
        in = b;
    }
    void display(){
        cout<<"ft "<<ft<<" in "<<in<<endl;
    }
    friend DM add(DM a, DB b);

    friend DB add(DB a, DM b);
};
DM add(DM a, DB b){
   
    double allincm  = a.m*100 + a.cm + (b.ft*12)*2.54 + b.in * 2.54;
    return (DM(allincm/100, (int)allincm%100));
}
DB add(DB a, DM b ){

    double allininch = a.ft*12 + a.in + b.m*3.28*12 + b.cm/2.54;
    return(DB(allininch/12,(int)allininch%12));
}
int main(){
    DM dm(1,0);
    DB db(0,0);
    dm.display();
    db.display();
    DM dmSum;
    DB dbSum;
    dmSum = add(dm, db);
    dbSum = add(db, dm);
    dmSum.display();
    dbSum.display();
    return 0;
}