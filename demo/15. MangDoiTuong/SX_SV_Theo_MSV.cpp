#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	struct sinhVien
		{
			string ma, ten, lop ,email;
			void in()
				{
					cout << ma <<' ' << ten <<' ' << lop <<' ' << email << endl;
				}
		};
	bool cmp(sinhVien a,sinhVien b)
		{
			return a.ma < b.ma;
		}
    int main()
        {
			string ma,ten,lop,email;
			vector<sinhVien> v;
			while(getline(cin,ma))
				{
					sinhVien tmp;
					tmp.ma = ma;
					getline(cin,ten);
					tmp.ten = ten;
					getline(cin,lop);
					tmp.lop = lop;
					getline(cin,email);
					tmp.email = email;
					v.push_back(tmp);
				}
			sort(v.begin(),v.end(),cmp);
			for(int i = 0;i < v.size();i++)
				{
					v[i].in();
				}
            return 0;
        }


