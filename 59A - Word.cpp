#include<iostream>
#include<cstring>
#include<cctype> // for isupper() function, it returns a true value if the character of a string is upper case

using namespace std;

int main(){
 char str[101];
 cin.getline(str,101);

 int length=strlen(str);

 int lower_case=0;
 int upper_case=0; // counters

 //counting the number of uppercase & lowercase letters in the provided string
 for(int i=0;i<length;i++){ // we can also use the NULL pointer('\0') as we did before in condition checking
    if(isupper(str[i])){
       upper_case++;
       }
    else
    lower_case++;
 }
  
 if(lower_case>=upper_case){ // as the prblem stated, equal number of uppercase and lowercase letters should replace all the letters with lowercase ones

    for(int i=0;i<length;i++){
        char new_str= tolower(str[i]);
        cout<<new_str;
    }
 }
 else
      for(int i=0;i<length;i++){
        char new_str= toupper(str[i]);
        cout<<new_str;
    }
 return 0;




}
