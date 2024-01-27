#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k = 1;
	void chuanHoa(string &s);
	class GiangVien
		{
			private:
				string hoTen,boMon,ma;
			public:
				void nhap()
					{
						getline(cin,hoTen);
						getline(cin,boMon);
						chuanHoa(boMon);
						ma = to_string(k++);
						while(ma.size() < 2)
							ma = "0" + ma;
						ma = "GV" + ma;
					}
				void in()
					{
						cout << ma <<' ' << hoTen <<' ' <<boMon << endl;
					}
				string getBoMon()
					{
						return this->boMon;
					}
		};
	
	void chuanHoa(string &s)
		{
				stringstream ss(s);
				string tmp;
				s = "";
				vector<string> v;
				while(ss >> tmp)
					{
						v.push_back(tmp);
					}
				for(int i = 0; i < v.size();i++)
					{
						s += toupper(v[i][0]);
					}
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			map<string,vector<GiangVien>> mp;
			for(int i = 0; i < n;i++)
				{
					GiangVien tmp; 
					tmp.nhap();
					mp[tmp.getBoMon()].push_back(tmp);
				}
			int q; cin >> q;
			cin.ignore();
			while(q--)
				{
					string s;
					getline(cin,s);
					chuanHoa(s);
					cout <<"DANH SACH GIANG VIEN BO MON " <<s <<":\n";
					for(auto it: mp[s])
						{
							it.in();
						}
				}
			
            return 0;
        }


