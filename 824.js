var toGoatLatin = function(S) {
    var s = new Array();
    s = S.split(" ");
    for(var i = 0; i < s.length; i++) {
        if(s[i][0] == 'a' || s[i][0] == 'e' || s[i][0] == 'i' || s[i][0] == 'o' || s[i][0] == 'u' || s[i][0] == 'A' || s[i][0] == 'E' || s[i][0] == 'I' || s[i][0] == 'O' || s[i][0] == 'U') {
            s[i] = s[i] + 'ma';
        }
        else{
            c = s[i][0]
            s[i] = s[i].substr(1)
            s[i] = s[i] + c + 'ma';
        }
        for(var r = 0; r < i + 1; r++){
            s[i] = s[i] + 'a';
        }
    }
    var a;
    a = s[0]
    for (var i = 1; i < s.length; i++) {
        a =a + " " + s[i]
    }
    return a;
};