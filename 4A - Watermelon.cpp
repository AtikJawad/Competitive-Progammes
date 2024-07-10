
#include<iostream>
using namespace std;

int main()
{
int weight;
  cin>>weight;

    if(weight%2==0 && weight!=2 ){ // Here weight can not be equal 2 coz Pete & Billy wants an even number of weight when the melon is divided
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

  return 0;

}
