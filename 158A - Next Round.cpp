#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n]; //this array is the index for the scores
    int next_rounders=0; // Participants advancing to the next round
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0 ) // k-1 bcz index started with 0, also As shown in example-2 we can't take zero as a place
        { 
            next_rounders++; // increasing Counter
        }
        

        }
    cout<<next_rounders; // Output

    return 0;
}
