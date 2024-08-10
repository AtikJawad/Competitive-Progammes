#include<iostream>

using namespace std;

int main(){
 int n;
 cin>>n;
 int m[n]; // total number of magnets and an array to show what order they are placed in 

 int groups=0; // counter to count the number of magnet groups

 for(int i=0;i<n;i++){

    cin>>m[i];     //inputting values(10 or 01) in the array indexes

 }
 for(int i=0;i<n;i++){

    if(m[i]!=m[i+1]){  // checking if i'th index value is equal to [i+1]'th index value, if they are not equal means they form a separate group

        groups++; // increments counter
    }
 }

 cout<<groups; // output

 return 0;
}

