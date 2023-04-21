class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int first,second,third;
        first=LONG_MIN;
        int n=nums.size();
        //if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(first<nums[i]) 
                first=nums[i];
        }
        second=LONG_MIN;
        for(int i=0;i<n;i++){
            if(second<nums[i] and first!=nums[i])
                second=nums[i];
        }
        third=LONG_MIN;
        for(int i=0;i<n;i++){
            if(third<nums[i] and first!=nums[i] && second!=nums[i])
                third=nums[i];
        }
        if(third==LONG_MIN) return first;
        else return third;
    }
};
