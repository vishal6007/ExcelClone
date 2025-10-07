class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int i = 0;
        string ans = "";
        int n = s.size();
        int j = (numRows-1)*2;
        while (i < numRows) {
            int step = j-(2*i);
            if(step == 0) step = j;
            int idx = i;
            while(idx < n) {
                ans += s[idx];
                idx += step;
                step = j-step;
                if(step == 0) step = j;
            }
            i++;
        }
        return ans;
    }
};
