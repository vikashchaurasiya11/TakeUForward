class Solution {
public:
    void pattern12(int n) {
        for(int i=0;i<n;i++){
            for(int l=1;l<=i+1;l++){
                cout<<l;
            }
            for(int k=0;k<2*(n-i)-2;k++){
                cout<<" ";
            }
            for(int j=i+1;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
};