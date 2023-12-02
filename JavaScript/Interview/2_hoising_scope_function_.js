// this is called anomynous function and function expression
/*
const sq = function(num){
    return num*num;
}

console.log(sq(5));

*/
// first class function : we can pass function as arg to function
/*
function sq(num){
    return num*num;
}

function display(fn){
    console.log(fn(5));
}

display(sq);
*/

// IIFE
/*
(function sq(num){
    console.log(num*num);
})(5);

//IIFE & Closure


(
    function display1(x){
        (function display(y){
            console.log(x);
        })(1)
    }
)(2)
*/

//hoisting

var x = 21;

function display(){
    console.log(x);
    var x = 20;
}

display(); // this will show undefined as output

//argment & params

const display(num){  // passing here is params
    return num* num;
}

display(5) // passing here is args

// rest operator vs spread operator

function display(...arr){ // rest opearator Note: rest opearator should be the last while passing params
    console.log(arr);
}


const arr = [1,2];

display(...arr) // spread operator


// arrow function vs normal function

1. syntax
2. implicit return kw
3.'argument' kw , we can use in normal function but we cant use it in arrow
4.'this' kw , arrow function has global scope for 'this' , while normal func points to current object using this kw

