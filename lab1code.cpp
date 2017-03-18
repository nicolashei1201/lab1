#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
again:
	cout<<n<<" ";
if(n==1)
{return 0;

}
if(n%2==1)
{
	n=n*3+1;
	goto again;
}
else{n=n/2;
goto again;

}
return 0;}
