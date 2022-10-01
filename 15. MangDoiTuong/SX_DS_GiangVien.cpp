#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	class GiangVien
		{
			private:
				string hoTen,boMon,ma,ten;
			public:
				void nhap()
					{
						getline(cin,hoTen);
						getline(cin,boMon);
						stringstream ss(boMon),tt(hoTen);
						string tmp;
						boMon = "";
						vector<string> v;
						while(ss >> tmp)
							{
								v.push_back(tmp);
							}
						for(int i = 0; i < v.size();i++)
							{
								boMon += toupper(v[i][0]);
							}
						while(tt >> tmp)
							{
								
							}
						ten = tmp;
						ma = to_string(k++);
						while(ma.size() < 2)
							ma = "0" + ma;
						ma = "GV" + ma;
					}
				void in()
					{
						cout << ma <<' ' << hoTen <<' ' <<boMon << endl;
					}
				string getName()
					{
						return this->ten;
					}
				string getma()
					{
						return this->ma;
					}
		};
	bool cmp(GiangVien a,GiangVien b)
		{
			if(a.getName() != b.getName())
				return a.getName() < b.getName();
			else
				return a.getma() < b.getma();
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			GiangVien a[n];
			for(int i = 0; i < n;i++)
				{
					a[i].nhap();
				}
			sort(a,a+n,cmp);
			for(int i = 0; i < n;i++)
				{
					a[i].in();
				}
            return 0;
        }


