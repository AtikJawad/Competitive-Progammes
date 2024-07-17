//quite easy problem
#include<iostream>
using namespace std;

int main(){
 int n,h;
 cin>>n>>h; // inputting number of people & height of the fence respectivly
 int a;

 int width=0;// counters 

 for(int i=0; i<n ; i++){
        cin>>a;  //inputting the height of ith person
        if(a>h){
            width+=2; // if they are taller than the fence they will have to bent on their kneees and that's why width will be incremented by 2
        }
        else
            width++;
 }
 cout<<width;


 return 0;
}

