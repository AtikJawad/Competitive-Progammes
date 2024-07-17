#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int a,b; // a= number of passengers exiting & b= number of passengers entering

 int capacity=0; int max_capacity=0; // counters

 for(int i=0; i<n ; i++){
        cin>>a>>b;

        capacity -= a; //capacity was initialized with 0 as no one remains on the train at first & subtracting a from capacity means a number of people left the train
        capacity+=b;

        if(capacity>max_capacity){
            max_capacity=capacity;
        }
 }

 cout<<max_capacity; // output

 return 0;
}

