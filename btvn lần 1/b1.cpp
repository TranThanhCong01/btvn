#include <iostream>
using namespace std;
int main()
{
	int a;
	do
	{
		cin>>a;
	} while(a<1 or a>7);
	if(a==1) cout<<"chu nhat\n";
	else if(a==2) cout<<"thu hai\n";
	else if(a==3) cout<<"thu ba\n";
	else if(a==4) cout<<"thu tu\n";
	else if(a==5) cout<<"thu nam\n";
	else if(a==6) cout<<"thu sau\n";
	else cout<<"thu bay";
	return 0;
}