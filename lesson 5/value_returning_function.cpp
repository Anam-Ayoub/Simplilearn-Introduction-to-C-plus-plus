#include <iostream>
using namespace std;

int multiplicator(int x, int z){

    return x*z;
}

int main(){
    cout<<"Welcome human to the MULTIPLICATOR!"<<endl;
    cout<<"Please enter your candidates to begin the process..."<<endl;
    int n1 , n2;
    cout<<"Insert a number --> ";
    cin>>n1;
    cout<<"Insert another --> ";
    cin>>n2;
    cout<<"Shall we begin?"<<endl;
    cout<<"....pro.ces..sin..g..."<<endl;
    int result = multiplicator(n1,n2);
    cout<<"Ladies and Gentlmen!"<<endl;
    cout<<n1<<" x "<<n2<<" = "<<result;
    return 0;
    
}