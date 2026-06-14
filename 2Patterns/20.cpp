class Solution {
public:
    void pattern20(int n) {

        // second half
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            for(int k=0;k<2*(n-i-1);k++){
                cout<<" ";
            }
            for(int l=0;l<=i;l++){
                cout<<"*";
            }
            cout<<endl;
        }

        
        // first half
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                cout<<"*";
            }
            for(int k=0;k<2*i;k++){
                cout<<" ";
            }
            for(int l=i;l<n;l++){
                cout<<"*";
            }
            cout<<endl;
        }


        
    }
};