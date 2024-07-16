#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    x=0;
    for(int i=0;i<n;i++){
        string str; // using string makes it easier than using character array in this problem
        cin>>str; // taking input
      
        if(str=="++X"||str=="X++"){
          
            x++;    //conventional ++x & x++ is different but in this problem it's the same
        }
        else
        x--;
        
        }
    
    cout<<x; //The Final Value of X

    return 0;
}
