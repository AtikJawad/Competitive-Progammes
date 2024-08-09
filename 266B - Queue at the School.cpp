#include<iostream>
#include<cstring>
using namespace std;

int main(){
 int n,t;
 cin>>n>>t;
 char line[n];
 cin>>line;
 for(int sec=0;sec<t;sec++){
    for(int i=0;i<n;i++){
        if(line[i] < line[i+1]){
            swap(line[i] , line[i+1]); // swap() is a built-in function in cpp
         
            i++;   /*When you find a BG pair in the queue and swap them, you need to ensure that the newly swapped pair (now GB) is not considered for swapping again in the same iteration of the inner loop. 
                   If you don't increment i, the loop would check the new positions as well, potentially swapping them again within the same second, which is not desired. That's why it's necessary to increment in in the if statement.
                  */
        }
    }
 }

 for(int i=0;i<n;i++){
    cout<<line[i]; // Output
 }


 return 0;
}

