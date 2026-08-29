class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> result;
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }

        for(auto it : m){
            vector<string> grupo = it.second;
            result.push_back(grupo);
        }
        return result;
    }
};
