#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void spach(string &s)
		{
			for(int i = s.size() - 1; i >= 0;i--)
				{
					if(s[i] == ' ')
						s.pop_back();
					else 
						return ;
				}
		}
	int k = 1;
	struct SinhVien
		{
			string stt, ma, ten, lop, email, doanhNghiep;
			void nhap()
				{
					getline(cin,ma);
					spach(ma);
					getline(cin,ten);
					spach(ten);
					getline(cin,lop);
					spach(lop);
					getline(cin,email);
					spach(email);
					getline(cin,doanhNghiep);
					spach(doanhNghiep);
					stt = to_string(k++);
				}
			void in()
				{
					cout <<stt <<' ' << ma <<' '<< ten << ' ' << lop <<' ' << email <<' ' << doanhNghiep<< endl;
				}
		};
	bool cmp(SinhVien a,SinhVien b)
		{
			return a.ma < b.ma;
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			map<string,vector<SinhVien>> mp;
			for(int i = 0; i < n;i++)
				{
					SinhVien tmp; tmp.nhap();
					mp[tmp.doanhNghiep].push_back(tmp);
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					vector<SinhVien> v;
					string dn ; getline(cin,dn);
					for(auto it : mp[dn])
						{
							v.push_back(it);
						}
					sort(v.begin(),v.end(),cmp);
					for(SinhVien x : v)
						{
							x.in();
						}
				}
            return 0;
        }



