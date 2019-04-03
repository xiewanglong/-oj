var canConstruct = function(ransomNote, magazine) {
    var a = new Array(),b = new Array();
    for (var i = 0; i < 125; i++){
        a[i] = 0;
        b[i] = 0;
    }
    for (var i = 0; i < ransomNote.length; i++) {
        a[ransomNote[i].charCodeAt()]++;
    }
    for (var i = 0; i < magazine.length; i++) {
        b[magazine[i].charCodeAt()]++;
    }
    for (var i = 0; i < 125; i++) {
        if (a[i] > b[i]) {
            return false;
        }
    }
    return true;
};