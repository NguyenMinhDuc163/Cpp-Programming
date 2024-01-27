#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long
	void doiCho(string s)
		{
			int i = s.size() - 2; // vi tri sau vi tri cuoi cung de khi duyet i+1 khong bi tran
			// dieu kien la thang truoc lon hon thang ben phai (s[i] > s[i + 1]) thi khi doi cho se sinh ra so lon hon
			while(s[i] <= s[i + 1] && i >= 0)
				{
					i--;
				}
			if(i == -1)
				{
					cout <<"-1\n";
					return;
				}
				
			int j = s.size() - 1;
			// th sau : khi s[i] > s[j] roi nhung cac ptu s[j] bang nhau phai timm tiep
			while(s[i] <= s[j] || (s[j] < s[i] && s[j] == s[j-1]))
				{
					j--;
				}
			swap(s[i],s[j]);
			if(s[0] =='0')
				cout <<"-1\n";
			else
				cout << s << endl;
		}
    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					string s; cin >> s;
					doiCho(s);
				}
            return 0;
        }


