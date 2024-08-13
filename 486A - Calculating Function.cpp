#include <iostream>
using namespace std;

int main() {
    long long  n;
    cin>>n;
    if(n%2==0){
        cout<< n/2;        /*
                                  if we notice closely to the function there is a pattern -->
                                  1. if n is even , the output is half of n
                                  2. if n is odd, then its -(n+1)/2 
                          */
    }
    else
    cout << -(n+1)/2;

    return 0;
}
