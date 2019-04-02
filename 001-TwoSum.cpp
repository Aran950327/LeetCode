class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vi;
        unordered_map<int,int> hmap;//声明一个hash map表
        for(auto i = 0; i < nums.size(); i++){
            hmap.insert(pair<int,int>(nums[i],i));
        }
        for(auto j = 0; j < nums.size(); j++){
            if(hmap.find(target - nums[j]) != hmap.end()){
                int k = hmap[target - nums[j]];
                if(k < j){
                    vi.push_back(k);
                    vi.push_back(j);
                }

            }
        }
        return vi;
    }
};
/*
 * 结论：如果需要内部元素自动排序，使用map，不需要排序使用unordered_map
 */