#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int n;
cin>>n;
char word[101]; // Assuming the longest abbreviation can have 100 words in between
for(int i=0;i<n;i++){
    cin>>word;
    int length=strlen(word);


    if(length>10)  // As we are directly advised to not abbreviate words more than 10 letters
    {
      cout<<word[0]<<length-2<<word[length-1]<<endl;  /*Here length-1 means the last index of the word.
                                                                                    As length represents the total number of words and string starts on the zero'th index.*/
}
   else
   cout<<word<<endl; //endl is vital here otherwise we'll get presentation error

}
return 0;
}
