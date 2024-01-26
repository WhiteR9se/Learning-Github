#include <iostream>
#include <string>

using namespace std;


int main() {
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%2==0){
        cout<<"this has changed";
    }
    else if(n%2!= 0){
        cout<<"it is odd";
    }
    return 0;
}
