class Solution{
public:
    void reverse(vector<int>& arr){
        for(int i=0,j= arr.size()-1; i<j; i++,j--){
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]= temp;
        }
    }
};