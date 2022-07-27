class Solution {
	public:
		vector<vector<int>> threeSum(vector<int>& nums) 
		{
			sort(nums.begin(), nums.end());
			vector<vector<int>> res;
            int z = nums.size();
			for (int left=0; left<z; left++) {
				if ((left>0) && (nums[left]==nums[left-1]))
				{
					continue;
				}
				int mid = left+1, right = z-1;
				while (mid<right) {
					int s = nums[left]+nums[mid]+nums[right];
					if (s>0) right--;
					else if (s<0) mid++;
					else 
					{
						res.push_back(vector<int> {nums[left], nums[mid], nums[right]});
						while ((mid+1<z)  &&  nums[mid]==nums[mid+1]) mid++;
						while ((right-1)>=0  &&  nums[right]==nums[right-1] ) right--;
						mid++; right--;
					}
				}
			}
			return res;
		}
	};