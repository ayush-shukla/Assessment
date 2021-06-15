#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
   int n;
   cin>>n;
   vector<int>v;
   if(n%2)v.push_back(0);
   int x=n/2;
   for(int i=1;i<=x;i++){
       v.push_back(i);
       v.push_back(i*-1);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}