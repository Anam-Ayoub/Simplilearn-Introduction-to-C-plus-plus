#include <iostream>
using namespace std;

void salEdit(int S, int B){

    cout<<"Salary in salEdit() = "<<S+B<<endl;

}

int main(){
    int s;
    int bonus = 100;
    cout<<"Enter salary --> ";
    cin>>s;
    cout<<"--------------------------"<<endl;
    cout<<"Salary in main() BEFORE function call = "<<s<<endl;
    salEdit(s,bonus);
    cout<<"Salary in main() AFTER function call = "<<s<<endl;

    return 0;
}