#include<iostream>

using namespace std;

int main(){
 int n;
 cin>>n;
 int opinion[n];
 for(int i=0;i<n;i++){ // taking the opinions in an integer array
    cin>>opinion[i]; 
 }

 for(int i=0;i<n;i++){
        if(opinion[i]==1){  // if any index of the array contains 1, then it's a HARD question
            cout<<"HARD"<<endl;
            return 0; // exiting the program if IF statement is true
        }

 }
cout<<"EASY"<<endl;

 return 0;
}

