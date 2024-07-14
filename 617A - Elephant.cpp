//another easy one
#include<iostream>
using namespace std;

int main(){
 int x;
 cin>>x;
 int steps=x/5;  //minimum numbers of steps needed that's why dividing by 5

 if(x%5 != 0){ // if the remainder is Zero means no more steps is needed but if it's not then steps can be incremented by 1 bcz the next step can never be greater than 5
    steps++;
 }
cout<<steps;

return 0;

}
