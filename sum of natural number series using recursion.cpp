#include<iostream>
using namespace std;

int sum(int n){
if(n==0)
    return 0;

int sumprev=sum(n-1);
return n+ sumprev;

}

int main(){
int n;
cout<<"Enter number:";
cin>>n;

cout<<"Sum is :"<<sum(n)<<endl;

return 0;
}
