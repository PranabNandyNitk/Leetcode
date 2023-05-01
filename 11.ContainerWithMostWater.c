class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        /*vector<int> L(n),R(n);
        for(int i=1;i<n;i++){
            if(height[L[i-1]]<height[i])
                L[i]=i;
            else
                L[i]=L[i-1];
        }

        R[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            if(height[R[i+1]]<height[i])
                R[i]=i;
            else
                R[i]=R[i+1];
        }
        cout<<"L :";
        for(int i=0;i<n;i++) cout<<L[i]<<" ";
        cout<<endl;
        cout<<"R :";
        for(int i=0;i<n;i++) cout<<R[i]<<" ";
        cout<<endl;
        int area=0;
        cout<<"area : ";
        for(int i=0;i<n;i++){
            int l=max(R[i]-L[i],0);
            int h=min(height[R[i]],height[L[i]]);
            cout<<l*h<<" ";
            area=max(area,l*h);
            
        }
        return area;
        */
        int i=0,j=n-1;
        int area=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int d=j-i;
            area=max(area,d*h);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return area;
    }
};
