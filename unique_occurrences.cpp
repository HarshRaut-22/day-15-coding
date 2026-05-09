class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        for(int i=0; i<arr.size(); i++){
            int count=1;
            while(i+1< arr.size() && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            v.push_back(count);
            sort(v.begin(),v.end());
            for(int j=0; j<v.size()-1; j++){
                if(v[j] == v[j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};
