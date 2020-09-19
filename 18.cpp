#define pb push_back
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,i;
        if(prices.size()<2) return 0;
        vector<int> v,vv(prices.size()-1);
        int ans=0;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(i=0;i<prices.size()-1;i++)
        {
           mn=min(mn,prices[i]);
            v.pb(mn);
        }
        for(i=prices.size()-1;i>=1;i--)
        {
           mx=max(mx,prices[i]);
            vv[i-1]=mx;
        }
      //  cout<<endl;
        for(i=0;i<v.size();i++)
        {
            //cout<<v[i]<<" "<<vv[i]<<endl;
            ans=max(ans,vv[i]-v[i]);
        }
        return ans;
    }
};
