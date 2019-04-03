var transpose = function(A) {
    var B = new Array();
    for (var i = 0; i < A[0].length; i++) {
        B[i] = new Array();
    }
    for (var i = 0; i < A.length; i++) {
        for (var r = 0; r < A[0].length; r++) {
            B[r][i] = A[i][r];
        }
    }
    return B;
};