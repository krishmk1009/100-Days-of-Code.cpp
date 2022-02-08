var arr = [0,1];
var next = 0;

function fibb(n){
    for(var i = 2; i<n;i++){
        next = (arr[i-1])+(arr[i-2]);
        arr.push(next);
    }
    return arr ;
    
}
