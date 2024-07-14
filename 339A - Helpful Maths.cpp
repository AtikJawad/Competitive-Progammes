#include<iostream>
#include<cstring>

using namespace std;

int main(){
 char str[101];
 cin.getline(str,101);
 char temp;


for(int i=0;str[i]!='\0';i+=2){
    if(str[1]=='\0'){
        break;
    }

    for(int j=i+2;str[j]!='\0';j+=2){

        if(str[i]>str[j]){

            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        
    }
}
cout<<str;
return 0;


}
