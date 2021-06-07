#include<iostream>
using namespace std;
int main()
{
    int age = 12;
    cout<<&age<<endl;

    int *age_pointer;
    age_pointer = &age;
    cout<<age_pointer;

    return 0;
}
