#include<iostream>
using namespace std;

int power(int n,int p){
if(p==0)
    return 1;

int r =power(n,p-1);
return n*r;

}

int main(){
int n,p;
cout<<"Enter number:";
cin>>n;
cout<<"Enter power:";
cin>>p;
cout<<"Result is :"<<power(n,p)<<endl;

return 0;
}

