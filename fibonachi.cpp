#include<iostream>
using namespace std;
int main(){
int t1,t2,t3,n;
cout<<"enter a number: ";
cin>>n;
t1=0;
t2=1;

for(int i=1;i<=n;i++){
   if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }  
t3=t1+t2;
t1=t2;
t2=t3;
cout<<t3<<",";
}
}