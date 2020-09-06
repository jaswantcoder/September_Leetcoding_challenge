/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define pb push_back
class Solution {
public:
    void traverse(TreeNode* root, vector<int> &v)
    {
        if(root==NULL) return ;
        traverse(root->left,v);
        v.pb(root->val);
        traverse(root->right,v);
        return ;
    }
    vector<int> merge(vector<int> v1,vector<int> v2)
    {
        int i=0,j=0;
        vector<int> v;
        int n=v1.size(),m=v2.size();
              while(i<n || j<m)
              {
                  if(i<n && j<m)
                  {
                      if(v1[i]<v2[j])
                          v.pb(v1[i++]);
                      else v.pb(v2[j++]);
                      
                  }
                  else if(i<n)
                  {
                      v.pb(v1[i++]);
                  }
                  else v.pb(v2[j++]);
              }
        return v;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode*root2) {
        vector<int> v1,v2,v;
        
        traverse(root1,v1);
        traverse(root2,v2);
        v=merge(v1,v2);
        return v;
        
    }
};
