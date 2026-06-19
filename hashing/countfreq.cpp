class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }


        vector<vector<int>> count(mp.size(),vector<int>(2));
        int i=0;
        for(auto x:mp){
            count[i][0]=x.first;
            count[i][1]=x.second;
            i++;
        }


        return count;
    }
};