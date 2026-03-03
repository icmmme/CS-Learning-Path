class Solution {
publc:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>groups;
        for(string s : strs){
            string key =s;
            sort(key.begin(), key.end());  //将排序后字符串加入key
            groups[key].push_back(s);   // 把原字符串加入对应组

        }
        vector<vector<string>> result;
        for(auto&pair : groups){
            result.push_back(pair.second);
        }
        return result;
    }
};

//由于互为字母异位词的两个字符串包含的字母相同，因此对两个字符串分别进行排序之后得到的字符串一定是相同的，可以将排序之后的字符串作为哈希表的键