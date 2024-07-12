//Might be the easiest problem encountered so far...
#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n; // inputting thhe size of board
  
    int area=m*n;
    int maximum_domino= area/2; //as no dominos overlap we have to take solid numbers avoiding fractions
  
    cout <<maximum_domino; // Output

    return 0;
}
