#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	class SinhVien
		{
			private:
				string ma,ten,lop,email;
			public:
				friend istream& operator >>(istream &in, SinhVien &x)
					{
						if(k++ == 1)
							cin.ignore();
						getline(in,x.ma);
						getline(in,x.ten);
						getline(in,x.lop);
						getline(in,x.email);
						return in;
					} 
				friend ostream& operator << (ostream &out,SinhVien x)
					{
						out << x.ma <<' ' <<x.ten <<' ' <<x.lop <<' ' <<x.email<< endl;
						return out;
					}
				string getClass()
					{
						return this->lop;
					}
				string getMa()
					{
						return this->ma;
					}
		};
	
	bool cmp(SinhVien a,SinhVien b)
		{
			if(a.getClass() != b.getClass())
				return a.getClass() < b.getClass();
			else
				return a.getMa() < b.getMa();
		}
	void sapxep(SinhVien a[],int n)
		{
			sort(a,a+n,cmp);
		}
    int main(){
	    int N,i;
	    cin >> N;
	    SinhVien ds[N];
	    for(i=0;i<N;i++) cin >> ds[i];
	    sapxep(ds, N);
	    for(i=0;i<N;i++) cout << ds[i];
	    return 0;
}


