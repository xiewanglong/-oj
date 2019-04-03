var addDigits = function(num) {
    while(num >= 10) {
        var sum = num, add = 0;
        while(sum > 0) {
            var c = sum % 10;
            add = add + c;
            sum = sum / 10;
            sum = parseInt(sum);
        }
        num = add;
    } 
  return num;
  };