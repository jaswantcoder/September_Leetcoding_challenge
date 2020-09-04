#define pb push_back

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()<=1) return false;
        vector<int> v;
        bool f=true;
        int i,n=s.size();
        v.pb(1);
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    v.pb(i);
                else 
                {
                    
                    v.pb(i); v.pb(n/i);
                }
            }
                
        }
        for(auto size: v)
        {
            for(i=size;i<n;i++)
            {
                if(s[i-size]!=s[i])
                    break;
            }
            if(i==n) return true;
           
        }
      return false;
  
    }
};
