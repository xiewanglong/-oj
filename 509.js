var fib = function(N) {
    var F = new Array()
    F[0] = 0;
    F[1] = 1;
    for(var i = 2; i <= N; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    return F[N];
}