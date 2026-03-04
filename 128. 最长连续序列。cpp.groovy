class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end()); //nums转换成哈希集合
        int i =0;
        for(int x : st){
            if(st.contains(x-1)){ // 以x-1为序列起点
                continue; 
            }
            int y = x +1;
            while(st.contains(y)){ 
                y++;
            }
            i = max(i, y-x); //x 到 y-1 个数
        }
        return i;
    }
};
