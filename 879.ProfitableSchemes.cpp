class Solution {
public:
    int dp[102][102][102];
    int mod=1e9+7;
    int helper(int crime, int noOfGroup, int totalProfit, int n, int minProfit, vector<int>& group, vector<int>& profit){
        //cout<<"crime :"<<crime<<" no of g :"<<noOfGroup<<" t p : "<<totalProfit<<endl;
        
        
        if(crime>=group.size()) {
            if(noOfGroup<=n and totalProfit>=minProfit)
                return 1;
            else return 0;
        }
        if (noOfGroup>n)
                 return 0;
        if(dp[crime][noOfGroup][totalProfit]!=-1) 
            return dp[crime][noOfGroup][totalProfit];
        
        int include,notInclude;
        notInclude=helper(crime+1,noOfGroup,totalProfit,n,minProfit,group,profit);
        include=helper(crime+1,noOfGroup+group[crime],min(minProfit,totalProfit+profit[crime]),n,minProfit,group,profit);


        return dp[crime][noOfGroup][totalProfit]=(include%mod + notInclude%mod) %mod;
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        int crime=0,noOfGroup=0,totalProfit=0;
        return helper(crime,noOfGroup,totalProfit,n,minProfit,group,profit);
    }
};
