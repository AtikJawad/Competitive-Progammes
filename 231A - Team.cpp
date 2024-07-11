#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int problem_solved=0;
    for(int i=0;i<n;i++){
        int Petya,Vasya,Tonya;
        cin>> Petya>>Vasya>>Tonya;
        
        int sure_to_solve= Petya+Vasya+Tonya; // summition show how many are sure
        
        if(sure_to_solve>=2){ // Counting the number of problems they solved 
            problem_solved++;
        }
    }
    
    cout<<problem_solved; //output

    return 0;
}
