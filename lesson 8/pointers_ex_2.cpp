#include<iostream>
using namespace std;

int main(){

    int n1, n2;
    int sum = 0;
    int sub = 0;
    int *ptr1;
    int *ptr2;
    
    cout<<"Dakhel dakhel --> ";
    cin>>n1;
    cout<<"3awd dakhel zid dakhel--> ";
    cin>>n2;
    ptr1 = &n1;
    ptr2 = &n2;
    (*ptr1)++;
    (*ptr2)++;
    cout<<"Hahoma tzado bwa7d:"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;

    sum = *ptr1 + *ptr2;
    sub = *ptr1 - *ptr2;

    cout<<*ptr1<<" + "<<*ptr2<<" = "<<sum<<endl;
    cout<<*ptr1<<" - "<<*ptr2<<" = "<<sub<<endl;
    return 0;
}