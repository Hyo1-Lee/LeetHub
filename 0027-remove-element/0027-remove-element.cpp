class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int cnt = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == val) {
				cnt++;
				nums[i] = -1;
			}
		}
		sort(nums.rbegin(), nums.rend());
		return nums.size() - cnt;
	}
};