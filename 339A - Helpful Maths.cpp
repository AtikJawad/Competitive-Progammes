#include<iostream>
#include<cstring>

using namespace std;

int main(){
 string str; // used string here instead of character array as it was getting error (don't know why)
 cin>>str;
 int n= str.length();
 char temp;


for(int i=0;i<n;i+=2){ // comparing even i'th index with even j'th index bcz odd index contains '+'
    if(str[1]=='\0'){
        break; //checks if the 2nd index is null (checks if the input has only 1 digit or not)
    }

    for(int j=i+2;j<n;j+=2){

        if(str[i]>str[j]){ // used the bubble sort to swap the digits numerically

            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }

    }
}
cout<<str; // output
return 0;


}
