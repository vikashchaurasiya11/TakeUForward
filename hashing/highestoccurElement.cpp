class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int,int>mp;

        for(int i=0;i <nums.size();i++){
            mp[nums[i]]++;
        }

        int n=0;
        int num=0;
        for(auto x: mp){
            if(x.second>n){
                n=x.second;
                num=x.first;
            }
        }

        return num;
    }
};