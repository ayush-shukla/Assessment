#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
   int n;
   cin>>n;
   map<int,int>m;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       m[x]++;
   }
   int amount,k;
   cin>>amount>>k;
   int c=0;
   for(auto i:m){
        if(amount/i.first==0)c+=i.second;
   }
   if(c==k)cout<<"Right\n";
   else cout<<"Wrong\n";
}