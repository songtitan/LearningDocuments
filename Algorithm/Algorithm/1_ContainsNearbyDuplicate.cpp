#include "1_ContainsNearbyDuplicate.h"

bool ContainsNearbyDuplicate(vector<int>& nums, int k)
{
	int numsLen = nums.size();
	for (int i = 0; i < numsLen - 1; i++)
	{
		for (int j = i + 1; j < numsLen; j++)
		{
			if (nums[i] == nums[j])
			{
				int difValue = j - i;
				if (difValue <= k)
				{
					return true;
				}
			}
		}
	}
	return false;
}
