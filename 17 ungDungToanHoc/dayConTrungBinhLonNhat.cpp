#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define ll long long

    int main()
        {
			int t; cin >> t;
			while(t--)
				{
					int n, k; cin >> n >> k;
					int a[n + 5] = {0};
					for(int i = 0; i < n;i++)
						cin >> a[i];
					ll sum1 = INT_MIN;
					vector<int> u;
					for(int i = 0; i < n - k + 1;i++)
						{
							int sum2 = 0;
							vector<int> v;
							for(int j = i; j < i + k; j++)
								{
									sum2 += a[j];
									v.push_back(a[j]);
								}
							if((sum2) >= sum1)
								{
									sum1 = sum2;
									u = v;
								}
						}
					for(int x: u)
						cout << x <<' ';
					cout << endl;
				}
            return 0;
        }

