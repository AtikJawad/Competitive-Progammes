#include<iostream>
#include<cstring>

using namespace std;

int main(){
 char str[1001];
 cin>>str;

 int length= strlen(str);
 int same_chars=0; // a counter to count the characters that are same in the string

for(int i=0;str[i]!='\0';i++){ 

    for(int j=i+1;str[j]!='\0';j++){ //the nested loop used to compare i'th string with j'th strings

        if(str[i]==str[j]){  //if the comparisons match it increases the counter and exits the inner loop
            same_chars++;
            break;
        }
    }
}
int distinct_chars=length-same_chars; // Subtracting the number of same characters from length to find distinct characters


if(distinct_chars%2==0){
    cout<<"CHAT WITH HER!"<<endl;  //If distinct characters are even 
}
else
    cout<<"IGNORE HIM!"<<endl;


return 0;
}
