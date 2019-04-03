var majorityElement = function (nums) {
    var hash = [];
    for (var i = 0; i < nums.length; i++) {
        if (!hash[nums[i]]) {
            hash[nums[i]] = 1
        } else {
            hash[nums[i]]++
        }
        if (hash[nums[i]] > nums.length / 2) {
            return nums[i]
        }
    }
};