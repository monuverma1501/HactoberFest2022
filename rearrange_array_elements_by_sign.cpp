// Brute Force approach 
// TC - O(n), SC - O(n)
class Solution {

public:

    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> pos;

        vector<int> neg;

        vector<int> res;

        for(int i=0; i<nums.size(); i++){

            if(nums[i] > 0) pos.push_back(nums[i]);

            else neg.push_back(nums[i]);
        }
        for(int i=0; i<nums.size()/2; i++){

            res.push_back(pos[i]);

            res.push_back(neg[i]);
        }
        return res;
    }
};

// ..................................................................

// Optimal approach 
// TC - O(n), SC - O(1)
class Solution {

public:

    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> res(nums.size(),0);

        int pos = 0, neg = 1;

        for(auto num : nums){

            if(num > 0){

                res[pos] = num;

                pos += 2;
            }

            else if(num < 0){

                res[neg] = num;
                
                neg += 2;
            }
        }
        return res;
    }
};