var findMaxConsecutiveOnes = function(nums) {
    var maxs = 0,c = 0;
    for(var i = 0; i < nums.length; i++) {      
        if(nums[i] == 1){
        c++;
        }
        if(nums[i] == 0){
            c = 0;
        }
        if(maxs < c) {
            maxs = c
        }
    }
    return maxs
};