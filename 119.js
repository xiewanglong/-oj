var getRow = function(rowIndex) {
    var a = new Array;
    var s = new Array;
    a[0] = 1;
    s[0] = 1;
    for(var i = 1; i < rowIndex + 1; i++) {
        a[i] = 0;
        s[i] = 0;
    }
    for(var i = 1; i < rowIndex + 1; i++) {
        for(var r = 1; r < i + 1; r++) {
            s[r] = a[r] + a [r - 1];
        }
        for(var r = 0; r < i + 1; r++) {
            a[r] = s[r];
        }
    }
    return a;
}