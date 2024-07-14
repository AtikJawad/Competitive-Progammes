//another easy one
#include<iostream>
using namespace std;

int main(){
 int k,n,w ;
 cin>>k>>n>>w; //respectively the cost of 1st banana, initial amount of dollars, number of bananas bought
 int cost=0;

 for(int i=1;i<=w;i++){
    cost=cost+ i*k ;
 }
 int borrow= cost>n? cost-n : 0 ; // Used Ternary/Conditional operator here
                              
  // if cost if greater than the initial amount then he has to borrow from his friend

 cout<<borrow;
 return 0;
}
