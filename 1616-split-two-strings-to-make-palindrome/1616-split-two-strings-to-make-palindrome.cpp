class Solution {
public:
    bool check(string a, string b) {
        int i = 0, j = a.size() - 1;

        while (i < j && a[i] == b[j]) {
            i++;
            j--;
        }

        int l = i, r = j;
        while (l < r && a[l] == a[r]) {
            l++;
            r--;
        }
        if (l >= r)
            return true;
            
        l = i, r = j;
        while (l < r && b[l] == b[r]) {
            l++;
            r--;
        }
        return l >= r;
    }
    bool checkPalindromeFormation(string a, string b) {
        return check(a, b) || check(b, a);
    }
};