#include<iostream>
using namespace std;
void  PassByValue(int v);
void PassByReference(int *o);
int main()
{
    int balls = 10;
    int bat = 10;
    PassByValue(balls);
    PassByReference(&bat);
    cout<<"Call by value "<<balls<<endl;
    cout<<"Call by reference "<<bat;
    return 0;
}
void PassByValue(int v){
    v = 90;
}
void PassByReference(int *o){
     *o = 100;
}
