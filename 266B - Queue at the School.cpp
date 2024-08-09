#include<iostream>
#include<cstring>
using namespace std;

int main(){
 int n,t;
 cin>>n>>t;
 char line[n];
 cin>>line;
 for(int sec=0;sec<t;sec++){
    for(int i=0;i<n;i++){
        if(line[i] < line[i+1]){
            swap(line[i] , line[i+1]);
            i++;
        }
    }
 }

 for(int i=0;i<n;i++){
    cout<<line[i];
 }


 return 0;
}

