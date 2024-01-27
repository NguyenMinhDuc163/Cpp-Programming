#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	class NhanVien
		{
			private:
				string ma,ten,gioiTinh,ngaySinh,diaChi,MST,ngayKi;
			public:
				friend istream& operator >>(istream &in, NhanVien &x)
					{
						if(k == 1)
							cin.ignore();
						getline(in,x.ten);
						getline(in,x.gioiTinh);
						getline(in,x.ngaySinh);
						getline(in,x.diaChi);
						getline(in,x.MST);
						getline(in,x.ngayKi);
						x.ma = to_string(k++);
						while(x.ma.size() < 5)
							x.ma = "0" + x.ma;
						return in;
					} 
				friend ostream& operator << (ostream &out,NhanVien x)
					{
						out << x.ma <<' ' <<x.ten <<' ' <<x.gioiTinh <<' ' <<x.ngaySinh <<' ' ;
						out <<x.diaChi <<' ' <<x.MST <<' ' <<x.ngayKi << endl;
						return out;
					}
				string getNS()
					{
						return this->ngaySinh;
					}
		};
	string doiTuoi(string &s)
		{
			stringstream ss(s);
			string token;
			vector<string> v;
			s = "";
			while(getline(ss,token,'/'))
				{
					v.push_back(token);
				}
			s = v[v.size() - 1];
			for(int i = 0; i < v.size() - 1;i++)
				s += v[i];
			return s;
		}
	bool cmp(NhanVien a,NhanVien b)
		{
			string s1 = a.getNS();
			string s2 = b.getNS();
			return doiTuoi(s1) < doiTuoi(s2);
		}
	void sapxep(NhanVien a[],int n)
		{
			sort(a,a+n,cmp);
		}
    int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


