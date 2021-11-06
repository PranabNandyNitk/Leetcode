#include<bits/stdc++.h>
using namespace std;

struct comp{
  bool operator()(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b){
    if(a.first>b.first) return true;
    else return false;
  }
};
int main(){
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
  string s;
  s+=string(5,'a');
  s+=string(2,'b');
  cout<<s<<endl;
}


691. Stickers to Spell Word


class Solution {
public:
    unordered_map<string,int> dp;    // unordered_map does not suppot vector<int> as a key
    int solve(string str,vector<vector<int>> &arr){
      
      if(dp.find(str)!=dp.end()) return dp[str];
      int ans=INT_MAX/2;
      int n=arr.size();

      vector<int> brr(26,0);
      for(char c:str) brr[c-'a']++;
      
      
      for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<26;j++){
            int x=max(0,brr[j]-arr[i][j]);
            s+=string(x,j+'a');
        }
        int temp=INT_MAX/2;
        if(str!=s)    // to avoid the infinite recursion
           temp=solve(s,arr);

        if(temp!=INT_MAX/2) // to avoid the overflow
          ans=min(ans,1+temp);
      }
      
      return dp[str]=ans;
    }
    int minStickers(vector<string>& stickers, string target) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      int n=stickers.size();
      dp.clear();

        vector<vector<int>> arr(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
          for(char c:stickers[i]) arr[i][c-'a']++;
        } 
        dp[""]=0;
        
        vector<int> brr(26,0);
        for(char c:target) brr[c-'a']++;

        string s;
        for(int j=0;j<26;j++) s+=string(brr[j],j+'a');
        
        int x= solve(s,arr);
        if(x==INT_MAX/2) return -1;
        return x; 

    }
};