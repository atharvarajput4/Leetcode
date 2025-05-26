// class Solution {
// public:
//     string triangleType(vector<int>& num) {
//         sort(num.begin(),num.end());
//         string ans = "none";;
//         if(num[0] == num[1] && num[1] == num[2]){
//             ans = "equilateral";
//         }else if(num[0] == num[1] || num[1] == num[2]){
//             ans = "isosceles";
//         }else if(num[0]+num[1] > num[2] && num[0]+num[2] > num[1] && num[1]+num[2]>num[0]){
//             ans="scalene";
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        } else if (nums[0] == nums[2]) {
            return "equilateral";
        } else if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};