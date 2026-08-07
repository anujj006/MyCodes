class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) { //easy problem leetcode
        int n = nums.size();
        vector<int> freq(n + 1, 0);   //used hashing
        vector<int> ans;
        int duplicate = 0;
        int missing = 0;
for (int x : nums)
    freq[x]++;

for (int i = 1; i <= n; i++) {
    if (freq[i] == 2) duplicate = i;
    if (freq[i] == 0) missing = i;
}
ans.push_back(duplicate);
ans.push_back(missing);
return ans;

    }
};
//committed by anuj sen