#include<iostream>
using namespace std;

int main(){
 int y;
 cin>>y;

 while(y++){ // here only increment operator is used in the while loop

     int a=y/1000;   // assigning 1st digit of y to a
     int b=(y/100)%10;  //assigning 2nd digit of y to b 
     int c= (y/10)%10;   //assigning 3rd digit of y to c 
     int d=y%10;   //assigning last digit of y to d

     if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){

        break;     // if all the digits do not match to each other then break the loop
     }
 }

 cout<<y; // Output

 return 0;


}
