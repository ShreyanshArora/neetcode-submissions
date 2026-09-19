class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int l = i + 1, r = numbers.size() - 1;

            int need = target - numbers[i];
            while (l <= r) {
                int mid = l + (r-l) / 2;
                if (numbers[mid] == need) {
                    return {i + 1, mid + 1};
                } else if (numbers[mid] < need) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        // l=0,r=3
        // mid=1 need=4
        // 1<4

        return {};
    }
};
