class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        vector<bool> pairXor(MAXX, false);
        vector<bool> ans(MAXX, false);

        int n = nums.size();

        for (int k = 0; k < n; k++) {

            for (int i = 0; i <= k; i++) {
                pairXor[nums[i] ^ nums[k]] = true;
            }

            for (int x = 0; x < MAXX; x++) {
                if (pairXor[x])
                    ans[x ^ nums[k]] = true;
            }
        }

        int cnt = 0;
        for (bool x : ans)
            if (x) cnt++;

        return cnt;
    }
};