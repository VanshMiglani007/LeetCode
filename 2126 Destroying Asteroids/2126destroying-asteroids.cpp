class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int l = 0;
        long long m = mass;
        while(l<asteroids.size()){
            if(m>=asteroids[l]){
                m += asteroids[l];
                l++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};