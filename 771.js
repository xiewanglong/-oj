var numJewelsInStones = function(J, S) {
    var add = 0;
    for(var i = 0; i < J.length; i++) {
        for(var r = 0; r < S.length; r++) {
            if(J[i] === S[r]){
                add++;
            }
        }
    }
    return add;
};