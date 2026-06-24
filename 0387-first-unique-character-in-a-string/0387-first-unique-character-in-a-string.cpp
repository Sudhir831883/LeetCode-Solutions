class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();
        vector<bool> v(n, false);

        for(int i = 0; i < n; i++) {

            if(v[i]) continue;

            int count = 1;

            for(int j = i + 1; j < n; j++) {

                if(s[i] == s[j]) {
                    count++;
                    v[j] = true;
                }
            }

            if(count == 1) {
                return i;
            }
        }

        return -1;
    }
};