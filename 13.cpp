#define pb push_back
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int ps=newInterval[0],pe=newInterval[1];
        vector<vector<int>> ans;
        int f=1;
        for(auto it :intervals)
        {
              if(it[1]<ps || it[0]>pe)
              {
                  if(it[0]>=pe && f)
                  {
                      ans.pb({ps,pe});
                      f=0;
                  }
                  ans.pb(it);
              }
            else 
            {
               ps=min(it[0],ps);
                pe=max(it[1],pe);
            
            }
           
        }
        if(f)
        {
            ans.pb({ps,pe});
        }
        return ans;
        
    }
};
