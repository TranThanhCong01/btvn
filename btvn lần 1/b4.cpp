#include <iostream>
using namespace std;
int main()
{
	long int j,n,i;
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++) cout<<"*";
		cout<<endl;
	}
	return 0;
}