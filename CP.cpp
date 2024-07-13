#include<iostream>
#include<cctype> //for tolower() function, it makes the character to lower case

using namespace std;
int main(){
 char str1[101],str2[101];

 cin>>str1>>str2;

 for(int i=0; str1[i]!='\0'&& str2[i]!='\0'; i++){

    char ch1= tolower(str1[i]);
    char ch2= tolower(str2[i]);

    if(ch1<ch2){
       cout<<"-1"<<endl;
       return 0;
     }
     else if(ch1>ch2){
       cout<<"1"<<endl;
       return 0;
       }
    }

    cout<<"0"<<endl;

return 0;


}
