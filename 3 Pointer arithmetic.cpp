#include<iostream>
using namespace std;
int main()
{
    int students[5];
    int *ptr0 = &students[0];
    int *ptr1 = &students[1];
    int *ptr2 = &students[2];
    ptr0+=2;




    cout<<ptr0<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<"Ptr0 is now at"<<ptr0;

    return 0;
}
