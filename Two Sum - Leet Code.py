class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hmap = {}
        rem=0
        for i, num in enumerate(nums):
            rem = target - num
            if rem in hmap:
                return [hmap[rem],i]
            hmap.update({num:i})
