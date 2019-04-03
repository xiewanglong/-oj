var detectCapitalUse = function(word) {
    var c = 0;
    for(var i = 0; i < word.length; i++) {
        if(word[i].charCodeAt() >= 'A'.charCodeAt() && word[i].charCodeAt() <= 'Z'.charCodeAt()){
            c++;
        }
    }
    if(c == word.length){
        return true;
    }
    c = 0;
    for(var i = 1; i < word.length; i++) {
        if(word[i].charCodeAt() >= 'a'.charCodeAt() && word[i].charCodeAt() <= 'z'.charCodeAt())
            c++
    }
    if(c == word.length - 1){
        return true;
    }
    return false;
};