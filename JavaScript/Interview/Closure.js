// //lexica scoping
// we can access the variable from outside of the function but we cant access the function from inside the function


//closure

//clousre scope chaining : we can access the parents scope parents ...like that

var e = 10;

function sum(a){
    return function(b){
        return function(c){
            return function(d){
                return a+b+c+e+d;
            };
        };
    };
}


console.log(sum(1)(2)(3)(4));



//que : what will be logged on console 

/*
let count =0;

(function printCount(){
    if(count == 0){
        let count = 1; // this is called shadowing the scope
        console.log(count);
    }
    console.log(count);
})();
// ans : 1 0 
*/
// que
/*

write a function to achive this resulst
const addVar = fun(6);

addVar(20);// return 26
addVar(21); //return 27
*/

function fun(num){
    return (innernum)=>console.log(num+innernum);
}
const addVar = fun(6);

addVar(20);// return 26
addVar(21); //return 27
