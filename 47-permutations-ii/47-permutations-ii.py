class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        return set([i for i in permutations(nums,len(nums))])