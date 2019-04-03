var isHappy = function(n) {
    while(1){
        var b,add = 0;
        while(n>0){
            b = n % 10;
            add = add + b * b;
            n = parseInt(n/10);
        }
        n = add
        if (n == 1){
            return true;
        }
        if (n == 4) {
            return false
        }
    }
};