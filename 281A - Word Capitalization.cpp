#include<iostream>
#include<cctype> //for toupper() function, it makes the character to upper case

using namespace std;

int main(){
 char str[1001]; // limit for the string is 10^3 in the problem
 cin>>str;
 char capital= toupper(str[0]); // Capitalizing the zero'th index or the 1st letter 

 cout<<capital; //printing the uppercased letter before starting the loop 

for(int i=1;str[i]!='\0';i++){
                                 /*in the loop 1 is assigned the initializer(i) not 0 because we dont wanna print the first letter again 
                                   as we have already printed it before*/

    cout<<str[i];
}


return 0;


}
