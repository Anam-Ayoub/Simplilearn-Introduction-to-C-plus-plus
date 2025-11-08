#include <iostream>
using namespace std;

int sum(int x){

    if (x!=0){
        return x+sum(x-1);
    }
}

int main(){

    int mun;
    cout<<"Kteb --> ";
    cin>>mun;
    cout<<"sum --> "<<sum(mun);

    return 0;

}