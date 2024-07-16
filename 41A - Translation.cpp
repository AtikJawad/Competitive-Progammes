#include<iostream>
#include<cstring>
using namespace std;

int main(){
char str1[101];
char str2[101];
cin>>str1>>str2;

int str1_length=strlen(str1);
int str2_length=strlen(str2);

int Yes=0;// counter
int i=0;
int j=str2_length-1;

while(i<str1_length && j>=0){ //Used while loop for ease of understanding and use bcz we r checking multiple conditions here

            if(str1[i]==str2[j]){ //if 1st index of string-1 equals to last index of string-2 then increments the counter
                Yes++;
            }
             i++; //means next index of str-1
             j--;// means previous index of str2

        }



if(Yes==str1_length){ // if the counter equals to the length means all the characters in it is the same but in reverse order
    cout<<"YES";
}

else
    cout<<"NO";

return 0;
}
