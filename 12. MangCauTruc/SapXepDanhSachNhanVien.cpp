#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	struct NhanVien
		{
			string ma,ten,gioiTinh,ngaySinh,diaChi,MST,ngayKi;
		};
	void nhap(NhanVien &a)
		{
			if(k == 1)
				cin.ignore();
			getline(cin,a.ten);
			getline(cin,a.gioiTinh);
			getline(cin,a.ngaySinh);
			getline(cin,a.diaChi);
			getline(cin,a.MST);
			getline(cin,a.ngayKi);
			a.ma = to_string(k++);
			while(a.ma.size() < 5)
				{
					a.ma = "0" + a.ma;
				}
		}
	void inds(NhanVien a[],int n)
		{
			for(int i = 0; i < n;i++)
				{
					cout << a[i].ma <<' ' << a[i].ten <<' ' <<a[i].gioiTinh <<' ' <<a[i].ngaySinh <<' ';
					cout <<a[i].diaChi <<' ' <<a[i].MST <<' ' <<a[i].ngayKi << endl;
				}
		}
	string doiTuoi(string a)
		{
			stringstream ss(a);
			string tmp ,ans = "";
			vector<string> v;
			while(getline(ss,tmp,'/'))
				{
					v.push_back(tmp);
				}
			ans += v[v.size() - 1];
			for(int i = 0; i < v.size() - 1;i++)
				ans += v[i];
			return ans;
		}
	bool cmp(NhanVien a,NhanVien b)
		{
			return doiTuoi(a.ngaySinh) < doiTuoi(b.ngaySinh);
		}
	void sapxep(NhanVien a[],int n)
		{
			stable_sort(a,a+n,cmp);
		}
	int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


