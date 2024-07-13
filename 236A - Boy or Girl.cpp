#include<iostream>
#include<cstring>

using namespace std;

int main(){
 char str[1001];
 cin>>str;
 
 int length= strlen(str);
 int same_chars=0;

for(int i=0;str[i]!='\0';i++){

    for(int j=i+1;str[j]!='\0';j++){

        if(str[i]==str[j]){
            same_chars++;
        }
    }
}
int distinct_chars=length-same_chars;


if(distinct_chars%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else
    cout<<"IGNORE HIM!"<<endl;


return 0;


}
