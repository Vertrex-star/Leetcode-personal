class Solution {
public:
    bool isPalindrom(const char *s, int r, int l) {
        while(r < l) {
            if(s[r] != s[l]) {return false;}
            r++;
            l--;
        }
        return true;
    }


    string longestPalindrome(string s) {
        const char *in = s.c_str();
        int n = s.length();
        vector<int> count(n, 0), ip(n, 0), jp(n, 0);
        int largest = 0;

        for(int i = 0; i < s.length(); i++) {
            for(int j = i; j < s.length(); j++) {
                if (in[i] == in[j] && ((j-i) > count[i]) && isPalindrom(in, i, j)) {
                    count[i] = (j - i);
                    ip[i] = i;
                    jp[i] = j;
                }
            }
        }

        for(int i = 0; i < s.length(); i++) {
            if(count[i] > count[largest]) {
                largest = i;
            }
        }

        string out;
        for(int i = ip[largest]; i <= jp[largest]; i++) {out += in[i];}

        return out;
    }
};
