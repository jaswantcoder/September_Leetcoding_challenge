#define pb push_back
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>m;
        int freq=0;
     for(auto it:s)
         m[it]++;
        string str="";
        vector<int> ans;
        vector<bool> vis(26,false);
        for(auto it :s)
        {
            if(vis[it-'a'])
                freq--;
            else{ freq+=m[it]-1;vis[it-'a']=true;}
           // cout<<freq<<" ";
            str+=it;
           // cout<<str<<" ";
            if(freq==0)
           {     ans.pb(str.size());
            str="";}
        }
        return ans;
    }
};
