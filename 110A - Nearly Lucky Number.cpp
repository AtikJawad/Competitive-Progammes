#include<iostream>
using namespace std;

int main(){
long long int n;
cin>>n;
int lucky_count=0; // counter

/* Special Note:- ** Number % 10 means the last digit 
                  ** Number/10 removes the last digit  
in INTEGER tpye only**** */
  
for(n; n>0; n/=10){
    int last_digit= n%10; 
    if(last_digit== 4 || last_digit==7){ // checking every digit to see if it's lucky
        lucky_count++;
    }
}
if(lucky_count==4|| lucky_count==7){ 
    cout<<"YES";
}
else
    cout<<"NO";
    
return 0;
}
