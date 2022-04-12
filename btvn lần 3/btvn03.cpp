#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class daThuc{
    private:
        int a,b,c,d;
    public:
        daThuc(int a=0,int b=0,int c=0,int d=0)
        {
            this->a=a;
            this->b=b;
            this->c=c;
            this->d=d;
        }
        ~daThuc(){}
        void nhap()
		{
			cout<<"ax3+bx2+cx+d\n";
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			cout<<"c=";
			cin>>c;
			cout<<"d=";
			cin>>d;
			fflush(stdin);

		}
		void in()
		{
		    cout<<endl;
		    cout<<a<<"x3+"<<b<<"x2+"<<c<<"x+"<<d;
		}
	    int aa()
	    {
	        return a;
	    }
	    int bb()
	    {
	        return b;
	    }int cc()
	    {
	        return c;
	    }int dd()
	    {
	        return d;
	    }
	    
	    daThuc operator+(daThuc &a3)
	  {  
	  		daThuc kq;
	     kq.a=this->a+a3.a;
	     kq.b=this->b+a3.b;
	     kq.c=this->c+a3.c;
	     kq.d=this->d+a3.d;
	     return kq;
	  }
};
int main(int argc, char *argv[])
{
    daThuc a1,a2,a3;
	cout<<"\nnhap da thuc thu nhat:\n";
	a1.nhap();
	cout<<"\nnhap da thuc thu hai:\n";
	a2.nhap();
	a3=a1+a2;
	cout<<"tong 2 da thuc la: ";
	a3.in();
		
	return 0;
}
