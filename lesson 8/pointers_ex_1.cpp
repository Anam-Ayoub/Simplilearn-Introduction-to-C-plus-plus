#include <iostream>
using namespace std;

int main(){

    int x;
    int *p;

    x = 70;
    p = &x;

    cout<<"x addres : "<<p<<endl;
    cout<<"Value referencing p is : "<<*p;
    return 0;
}