class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;  // unmatched '('
        int add = 0;   // needed additions

        for (char ch : s) {
            if (ch == '(') {
                open++;
            } 
            else {
                if (open > 0) {
                    open--;  // match ho gaya
                } else {
                    add++;   // extra ')'
                }
            }
        }

        return open + add;
    }
};