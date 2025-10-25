#include<iostream>
using namespace std;

int main(){

    string List;

    cout<<"Kteb --> ";

    getline(cin, List);

    List.push_back('D');

    cout<<"List after pushing --> "<<List<<endl; 
}