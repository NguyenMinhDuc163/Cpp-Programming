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
                    int a[n], index = 0, min_val = INT_MAX;
                    for(int i = 0 ; i < n ;i++)
                        {
                            cin >> a[i];
                            if(a[i] < min_val)
                                {
                                    min_val = a[i];
                                    index = i;
                                }
                        }
                    if(k > a[n - 1])
                        cout << lower_bound(a, a + index - 1, k) - a + 1 << endl;
                    else
                        cout << lower_bound(a + index, a + n, k) - a + 1 << endl;
                }
            
            return 0;
        }