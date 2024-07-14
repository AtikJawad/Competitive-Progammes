#include<iostream>
#include<cstring>

using namespace std;

int main(){
 int n;
 cin>>n;
 char color[101];
 cin>>color;

 int stones_removed=0; //counter

for(int i=0;i<n;i++){ //this loop will compare the color of i'th stone with [i+1]th stone

    if(color[i]==color[i+1]){ // if the color matches then removes that stone and increases the counter by 1 but if not then moves to next iteration

    stones_removed++;

    }
}

cout<<stones_removed; // output

return 0;

}
