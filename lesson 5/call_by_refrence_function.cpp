#include <iostream>
using namespace std;

void salEdit(int &S , int &B){

    S = S + B;
    cout<<"Salary in salaryEdit = "<<S<<endl;
}

int main(){
    int s;
    int bonus = 2550;

    cout<<"Enter Salary --> ";
    cin>>s;
    cout<<"Salary BEFORE function call = "<<s<<endl;
    salEdit(s,bonus);
    cout<<"Salary AFTER function call = "<<s;


    return 0;
}