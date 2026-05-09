class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>strength;
        for(int i=0; i<mat.size(); i++){
            int sum = accumulate(mat[i].begin(),mat[i].end(),0);
            strength.push_back({sum,i});
        }
        sort(strength.begin(),strength.end());
        vector<int> ans;
        for(int j=0; j<k; j++){
            ans.push_back(strength[j].second);
        }
        return ans;
    }
};
