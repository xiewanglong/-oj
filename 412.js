var fizzBuzz = function(n) {
    var a = new Array()
    for(var i = 1; i <= n; i++) {
        if(i % 3 === 0 && i % 5 === 0) {
            a.push("FizzBuzz");
        }
        else if(i % 3 === 0) {
            a.push("Fizz");
        }
        else if(i % 5 === 0) {
            a.push("Buzz");
        }
        else{
            a.push("" + i);
        }
    }
    return a;
};