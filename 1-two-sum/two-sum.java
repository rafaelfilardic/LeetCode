class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i < nums.length; i++) {
            int num = nums[i];
            int result = target - num;

            
            if(map.containsKey(result)) {
                return new int[] {map.get(result), i};
            }

            map.put(num, i);
        }
        
        return new int[0];
    }
}