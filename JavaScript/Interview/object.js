const obj = {
    name: 'John',
    age: 30,
    isMarried: false
};


for (key in obj) {
    console.log(key);
}


//que : what is the output of the following code

const obj1 = {

    a: 1,
    b: 2,
    a: 3,

}


console.log(obj1)

//ans : {a: 3, b: 2}


// que : create a function to modify the object's property and multiply them by 2

const obj2 = {
    a: 1,
    b: 2,
    c: 3,
    d: "hello",
}

function modify(obj) {

    for (key in obj) {
        if (typeof obj[key] === "number") {
            obj[key] = obj[key] * 2;
        }
    }


}

modify(obj2);
console.log(obj2);



// what is the output of the following code

const a = {}
const b = {key : 'b'}
const c = {key : 'c'}


a[b] = 123;
a[c] = 456;

console.log(a[b]);

//ans : 456 ,because it will take 'object object' as key and first it will assign 123 and then ovverride 456


// que : what is the output of the following code
/*
const user = {
    name: 'John',
    age: 30,
};
const obj3 = { a: 'one', b: 'two', ...user};

console.log(obj3);
*/


// que : what is the output of the following code


const user = {
    name: 'John',
    age: 30,
    isMarried: false
};

const data = JSON.stringify(user , ['name' , 'age']);

console.log(data);

//ans : {"name":"John","age":30} , it will only stringify the name and age property of the object

// que  : what is the output of the following code

const circle = {

    radius : 1,
    diameter : function(){
        return this.radius * 2;
    },

    circumference : () => {

        return 2 * Math.PI * this.radius;
    }

}

console.log(circle.diameter());
console.log(circle.circumference());

// ans : 2 , Nan , becuase arrow function does not have its own this , so it will take the global this which is window object

// que : what is destructuring in javascript


const user1 = {
 
    name : 'John',
    age : 30,
    isMarried : false,
    address : {
        street : '123 street',
        city : 'New York',
        country : 'USA'
    }



}


const {name , age , isMarried , address : {street , city , country}} = user1;

console.log(name , age , isMarried , street , city , country);

//note : we can rename the variable while destructuring the object like this name:firstName



/// three ways to clone an object

// 1. const obj4 = Object.assign({},obj1);
// 2. const obj5 = {...obj1};
// 3. const obj6 = JSON.parse(JSON.stringify(obj1));
