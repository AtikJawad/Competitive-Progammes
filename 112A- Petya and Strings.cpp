/* Lexicographical order means the dictionary or alphabetical order where case doesn't matter such as if we find two words in dictionary 'Java' and 'JavaScript',
  Java will be placed before JavaScript. */

#include<iostream>
#include<cctype> //for tolower() function, it makes the character to lower case

using namespace std;
int main(){
 char str1[101],str2[101];

 cin>>str1>>str2; //input

 for(int i=0; str1[i]!='\0'&& str2[i]!='\0'; i++){ // since both strings are of same size, the NULL will be at the same index for both strings 

    char ch1= tolower(str1[i]); //lowering each character if it's an upper case letter with every single iteration
    char ch2= tolower(str2[i]);

    if(ch1<ch2){              /*comparing every character of i'th index , if the characters are equal it proceeds to next iteration. and if any of the 
                              comparison is true it exits the program*/
       cout<<"-1"<<endl;
       return 0;
     }
     else if(ch1>ch2){
       cout<<"1"<<endl;
       return 0;
       }
    }

    cout<<"0"<<endl; // if both the strings are of the same character set means they are equal

return 0;


}
