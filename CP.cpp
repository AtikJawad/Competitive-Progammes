#include<iostream>
#include<cctype> //for toupper() function, it makes the character to lower case

using namespace std;

int main(){
 char str[1001];
 cin>>str;
 char capital= toupper(str[0]);

 cout<<capital;

for(int i=1;str[i]!='\0';i++){


    cout<<str[i];
}


return 0;


}
