class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>arr(26,0);
        for(char c:text){
            if(c=='b' ||c=='a'||c=='l'||c=='o'||c=='n') arr[c-'a']++;
        }
        arr['l'-'a']/=2;
        arr['o'-'a']/=2;

        return min({arr['b'-'a'],arr['a'-'a'],arr['l'-'a'],arr['o'-'a'],arr['n'-'a']});
    }
};