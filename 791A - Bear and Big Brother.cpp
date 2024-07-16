#include<iostream>
using namespace std;

int main(){
int a,b; // a=Limak's weight & b=Bob's weight
cin>>a>>b;

int years=0; // counter for years

for(int i=0; a<=b; i++){ // loop goes on as long as a is not greater than b

        a=3*a; // Limak weighs triple each year & Bob twice
        b=2*b;
        years++; // counter increases by one everytime loop is executed
}
cout<<years; // output

return 0;

}
