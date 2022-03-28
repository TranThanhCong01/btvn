#include <iostream>
using namespace std;
int main()
{
	long int p=1,n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		p=p*i*2;
	}
	cout<<"P = "<<p<<endl;
	return 0;
}