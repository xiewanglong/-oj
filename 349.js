var intersection = function(nums1, nums2) {
    var add, n = 0;
    add = new Array();
    for(var i = 0; i < nums1.length; i++){
        for(var r = 0; r < nums2.length; r++) {
            if (nums1[i] === nums2[r]){
                var biaoji = 0;
                for(var c = 0; c < add.length; c++) {
                    if (add[c] == nums2[r]){
                        biaoji = 1;
                    }
                }
               if(biaoji == 0) {
                    add[add.length] = nums1[i];
                }
            }
        }
    }
    return add;
};