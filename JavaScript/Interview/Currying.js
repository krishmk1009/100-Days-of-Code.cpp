//currying :Currying is a function that takes one argument at a time and returns a new function expecting the next argument. 


// why we use currying :
/*

1. It helps to avoid passing the same varible again and again
2. it divides the function into multiple functions so that it becomes easy to understand and maintain
3. it also handles the specific tasks



*/
/*
normal function 
function show(a,b){
    console.log(a+b);
}

show(1,2);
*/

function show(a) {

    return function (b) {
        console.log(a + b);
    }
}

show(1)(2);


//que : sum(1)(2)(3) = 6

function sum(a) {
    return function (b) {
        return function (c) {
            return a + b + c;
        }
    }
}

console.log(sum(1)(2)(3));


// que : perform the following task
// evaluate("sum")(1)(2)(3) = 6
// evaluate("minus")(1)(2)(3) = 6
// evaluate("multiply")(1)(2)(3) = 6
// evaluate("divide")(1)(2)(3) = 6

function evaluate(op) {
    return function (a) {

        return function (b) {

            return function (c) {
                switch (op) {
                    case "sum":
                        return a + b + c;
                    case "minus":
                        return a - b - c;
                    case "multiply":
                        return a * b * c;
                    case "divide":
                        return a / b / c;
                    default:
                        return "invalid operator"
                }
            }
        }
    }

}

console.log(evaluate("sum")(1)(2)(3));
console.log(evaluate("minus")(1)(2)(3));
console.log(evaluate("multiply")(1)(2)(3));
console.log(evaluate("divide")(1)(2)(3));


// question : perform infinite currying

function sum(a) {
    return function (b) {
        if (b) {
            return sum(a + b);
        }
        else {
            return a;

        }

    }
}

console.log(sum(1)(2)(3)(4)(5)());


// que :manipulate the dom using currying

function manipulateHeading(id){

    return function(content){

        document.getElementById(id).textContent = content;
        console.log(content);
    }
}

const updateH1 = manipulateHeading("heading");

updateH1("hello world");


//que


function curry(func){

    return function curriedFun(...args){

        if(args.length >= func.length){
         return   func(...args);
        }
        else{
            return function (...next){
                return curriedFun(...args , ...next);
            }
        }
    }
}


const f = (a,b,c)=>a+b+c;

const curried = curry(f);

console.log( "ans" +curried(1)(2)(3));
