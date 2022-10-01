#include <bits/stdc++.h> 
using namespace std;
 int main(){ 
 int t; cin>>t;
  while(t--){ 
  long N; cin>>N;
   long A[N]; 
   for(int i=0;i<N;i++)cin>>A[i];
    long min = 1e9; for(int i=0;i<N-1;i++){ 
	for(int j=i+1;j<N;j++){ if(A[i]==A[j]){
	 if(min > j){ min = j; } } } } 
	 if(min == 1e9)cout<<-1;
	  else{ cout<<A[min]; 
	  } cout<<endl; } }

