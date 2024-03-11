class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
        vector<int> cnt(words.size());
        for (int i = 0; i < words.size(); i++)
            for (int j = 0; j < words[i].size(); j++)
                cnt[i] |= 1 << (words[i][j] - 'a');
        for (int i = 0; i < words.size(); i++)
            for (int j = i + 1; j < words.size(); j++)
                if ((cnt[i] & cnt[j]) == 0 && words[i].size() * words[j].size() > ans)
                    ans = words[i].size() * words[j].size();
        return ans;
    }
};