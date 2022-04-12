#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
using namespace std;
class ptgt{
    private:
        string mpt;
        string hsx;
        string nxx;
        int gct;
    public:
        ptgt(){}
        ptgt(string mpt,string hsx,string nxx,int gct)
        {
            this->mpt=mpt;
            this->hsx=hsx;
            this->nxx=nxx;
            this->gct=gct;
        }
        ~ptgt(){}
        void nhap()
        {
            cin.ignore();
            cout<<"nhap ma phuong tien: "; 
            cin>>mpt;
            cout<<"nhap hang san xuat: "; 
            cin>>hsx;
            cout<<"nhap ngay xuat xuong: "; 
            cin>>nxx;
            cout<<"nhap gia chua thue: "; 
            cin>>gct;
        }
        void in1()
        {
            cout<<"|"<<setw(16)<<mpt
                <<"|"<<setw(30)<<hsx
                <<"|"<<setw(16)<<nxx
                <<"|"<<setw(16)<<gct<<"|\n";
        }
};

    void de()
    {
        cout<<"|"<<setw(16)<<"Ma phuong tien"
            <<"|"<<setw(30)<<"Hang san xuat"
            <<"|"<<setw(16)<<"Ngay xuat xuong"
            <<"|"<<setw(16)<<"Gia chua thue"<<endl;
    }
    void ngang(int m)
    {
        for(int i=1;i<=m;i++)
        {
           cout<<"_";
        }
    }
    void in(ptgt a[],int n)
    {
        cout<<" ";
        ngang(81);
        cout<<endl;
        cout<<"|"<<setw(16)<<"Ma phuong tien"
            <<"|"<<setw(30)<<"Hang san xuat"
            <<"|"<<setw(16)<<"Ngay xuat xuong"
            <<"|"<<setw(16)<<"Gia chua thue"<<"|\n";
        cout<<"|";ngang(16);
        cout<<"|";ngang(30);
        cout<<"|";ngang(16);
        cout<<"|";ngang(16);
        cout<<"|\n";
        for(int i=0;i<n;i++) a[i].in1();
        cout<<"|";ngang(16);
        cout<<"|";ngang(30);
        cout<<"|";ngang(16);
        cout<<"|";ngang(16);
        cout<<"|\n";
    }
int main()
{
    int n;
    ptgt a[100];
    cout<<"nhap so phuong tien:";
    cin>>n;
    for(int i=0;i<n;i++) a[i].nhap();
    cout<<"thong tin ptgt:\n";
    in(a,n);
    return 0;
}