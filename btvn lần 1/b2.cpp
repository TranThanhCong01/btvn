#include <iostream>
using namespace std;
int main()
{
	long int a,s;
	cin>>a;
	if(a>300) s=750000+(a-300)*5000;
	else if(a>200) s=450000+(a-200)*3000;
	else if(a>100) s=200000+(a-100)*2500;
	else s=a*2000;
	cout<<"so tien phai tra: "<<s<<endl;
	return 0;
}