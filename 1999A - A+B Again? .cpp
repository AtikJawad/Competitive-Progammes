#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n;
        int digit1= n/10; //stores the 1st digit (from left side)
        int digit2= n%10; // stores the 2nd digit
        int sum= digit1+digit2;
        
        cout<<sum<<endl;
    }
    
    return 0;
}
