#include<iostream>
#include<cstring>
using namespace std;

int main(){
 int n;
cin>>n;
char str[n]; // declaring a strngth of n length
cin>>str;
int Anton=0; //counters 
int Danik=0;

for(int i=0;i<n;i++){
        if(str[i]=='A'){ // checks each index of str and counts the number of A & D
            Anton++;
        }
        else
            Danik++;
    }

    if(Anton>Danik){
        cout<<"Anton";
    }
    else if(Danik>Anton){
        cout<<"Danik";
    }
    else
        cout<<"Friendship";

return 0;
}
