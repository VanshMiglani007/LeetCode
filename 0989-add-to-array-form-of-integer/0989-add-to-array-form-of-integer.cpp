class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        while(i>=0&&k>0){
            k+=num[i];
            num[i]=k%10;
            k/=10;
            i--;
        }
        while (k > 0) {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }
        return num;
    }
};


        // runtime error
        // string temp="";
        // for(int i=0;i<n;i++){
        //     temp+=to_string(num[i]);
        // }
        // int l=stoi(temp);
        // int sum=l+k;

        // vector<int>ans;
        // while(sum>0){
        //     int rem=sum%10;
        //     sum/=10;
        //     ans.push_back(rem);
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
//     }
// };