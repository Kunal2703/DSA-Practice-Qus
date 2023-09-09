#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> arr, int n){
   vector<int> dp(n, INT_MAX);
   dp[0]=0;
   for(int i=1; i<n; i++){
      if(i<2){
         dp[i]=dp[i-1]+abs(arr[i]-arr[i-1]);
      }
      else{
         dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]), dp[i-3]+abs(arr[i]-arr[i-3]));
      }
   }
   return dp[n-1];
}

int main(){
   int n=6;
   vector<int> arr{4,12,13,18,10,12};
   int res=solve(arr,n);
   cout<<res;
   return 0;
}