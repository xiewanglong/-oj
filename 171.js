var titleToNumber = function(s) {
    var a,add,c,d;
    add = 0
    for (var i = 0; i < s.length; i++) {
        if (s[i] <= "z" && s [i] >= "a"){
            a = s[i].charCodeAt() - "a".charCodeAt() + 1;
            add = add * 26 + a;
        } else {
            a = s[i].charCodeAt() - "A".charCodeAt() + 1;
            add = add * 26 + a;
        }
        
    }
    return add;
};