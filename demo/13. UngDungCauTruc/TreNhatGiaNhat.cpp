#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	int k  = 0;
	struct person
		{
			string ten,ngaySinh;
			
			void nhap()
				{
					string s; getline(cin,s);
					stringstream ss(s);
					string tmp;
					while(ss >> tmp)
						{
							if(k % 2 == 0)
								ten = tmp;
							else
								ngaySinh = tmp;
							k++;
						}
				}
		};
	string doiTuoi(person a)
		{
			stringstream ss(a.ngaySinh);
			string tmp,ans = "";
			while(getline(ss,tmp,'/'))
				{
					ans = tmp + ans;
				}
			return ans;
		}
	bool cmp(person a,person b)
		{
			return doiTuoi(a) < doiTuoi(b);
		}
    int main()
        {
			int n; cin >> n;
			cin.ignore();
			person a[n];
			for(int i = 0; i < n;i++)
				a[i].nhap();
			sort(a,a+n,cmp);
			cout << a[n-1].ten << endl << a[0].ten;
            return 0;
        }


