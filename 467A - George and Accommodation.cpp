#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int p[n],q[n]; //the number of people who already live in the room and the capacity of that room respectively

 int counter=0; // a counter to count the available room for George and Alex

 for(int i=0;i<n;i++){

    cin>>p[i]>>q[i]; // inputting via array 

    if(p[i] <= q[i]-2 ){ // here -2 bcz 2 people need the room so if we just put a condition without -2 ,there will be rooms where only 1 seat is available but the program will increase the counter 
            counter++;
    }
 }
 cout<<counter; // Output

 return 0;
}

