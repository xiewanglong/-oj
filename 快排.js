function square(arr){
    if(arr.length <= 1) {
        return arr;
    }
    var mins = [], maxs = [], biaoji;
    biaoji = arr.splice(0,1);
    for(var i = 0; i < arr.length; i++) {
        if (arr[i] <= biaoji) {
            mins.push(arr[i]);
        }
        if(arr[i] > biaoji) {
            maxs.push(arr[i])
        }
    }
    return square(mins).concat(biaoji,square(maxs));
}
console.log(square([5,5,5,5]));