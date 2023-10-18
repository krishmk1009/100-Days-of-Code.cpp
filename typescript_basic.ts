// let a:number = 5;

// console.log(a);

// function func(n:number , m:number):number{
//     return n + m;
// }

// // type Username =(n:string  , m :string) => string;

// // function func2: Username = (n,m)=>{
// //     return n + m;
// // };

// type Username = (n: string, m: string) => string;

// const func2: Username = (n, m) => {
//     return n + m;
// };


// const arr:number[] = [1,2,3,4,5,6,7,8,9,10]; 
// //  const arrayName :type[] : [values]

// const arr2:Array<number> = [1,2,3,4,5,6,7,8,9,10];;
// // const arrayName :Array<type> : [values]

// const arr3:[number,string] = [1,"2"];
// // const arrayName :[type,type] : [values]

// const arr4:Array<number | string> = [1,"2"];
// // const arrayName :Array<type | type> : [values]


// // const Obj : {nono:string , age:number} = {
// //    nono:"nono",
// //     age:21,
// // };

// type functionType = (n:number , m:number) => number;

// interface Obj {
//     height:number,
//     age:number,
//     work?:string,
//     callFunc?:functionType,

// }

// interface Obj2  extends Obj{

// }


// const newObj:Obj={
//     height:180,
//     age:21,
//     callFunc:(n,m)=>{   
//         return n + m;
//     }
   
// }




// optional parameter in function
// type funcType = (n:number , m:number , l?:number)=> number | string;


// const func:funcType  =(n,m, l)=>{
//     if(typeof l ===  "undefined") return "l is undefined"

//     return n + m+l;
// }


//default parameter in function

// type funcType = (n:number , m:number , l?:number )=>number;


// const func:funcType=(n , m, l=20) =>{
//     return n + m+l;
// }


// func(1,2)

// Rest parameter in function ---------------------

// type funcType = (...args:number[])=>number;

// type funcType = (...m:number[])=>number[];

// const fun:funcType=(...m)=>{
//     return m;
// }

// fun(1,2,3,4,5,6,7,8,9,10);


// object in function ---------------------

// interface Obj {
// class:string,
// age:number,
// }

// type funcType = (obj :Obj)=>void;

// const  fun:funcType= function  (obj){
// console.log(obj)
// }

// const passObj  :Obj={
//     class:"nono",
//     age:21,
// }

// fun(passObj);

//  we can pass a property in object as read only by using readonly keyword;


// class Hero {

//     constructor(private height:number , public age:number , protected work:string){
//         this.height = height;
//         this.age = age;
//         this.work = work;
//     }
// }

// const hero = new Hero(180,21,"web developer");
// console.log(hero.height)

// 
// // 
// The private, protected, and public access modifiers in TypeScript are used for enforcing access control during development, but they are not meant to provide strict privacy in the resulting JavaScript code. These modifiers are only enforced at compile-time to catch potential errors and maintain code quality, but they do not impose runtime access control in JavaScript.

// When you use private, it indicates that a property or method should only be accessible within the class in which it is defined. Similarly, protected allows access within the class and any subclasses (if applicable), while public makes the property or method accessible from anywhere.


// Yes, you've understood it correctly. In TypeScript, access modifiers like private, protected, and public are primarily tools to assist in the development process, enhance code quality, and make code more maintainable. They are not meant for providing security or privacy in the resulting JavaScript code.


//type assertion

// const btn = document.getElementById("btn");

// btn?.onclick;


// its saying that if btn is not null then only call onclick method;
// so we have three methods to do this .
//1. const btn = document.getElementById("btn") as HTMLButtonElement;
// 2. const btn = document.getElementById("btn")!;
//3.  const btn = <HTMLElement> document.getElementById("btn");

// btn.onclick;

// another example htat could be  accessing the image properties

// const img = document.getElementById("img") as HTMLImageElement;

// img.src;

// const form = document.getElementById("form") as HTMLFormElement;
// const input = document.getElementById("inp") as HTMLInputElement;

// form.onsubmit = (e) => {
// e.preventDefault();
// // console.log(input.value);
// const value = Number(input.value);

// const h2 = document.createElement("h2");
// h2.textContent = String(value);
// const body = document.querySelector("body");
// body?.appendChild(h2);  

// }

interface Obj {
    // [key:string]:string,
    name:string,
    age:string,

}

const person :Obj = {
    name:"nono",
    age:"21",
}

function getName (obj:Obj):string{
    return obj.name;
} 

function getAge (obj:Obj):string{
    return obj.age;
} 

function getData (key :keyof Obj ){
    return person[key]
} 

//  utility types
// // 1. Partial<Type>
// In TypeScript, the Partial<T> utility type is used to create a new type that has the same properties as the type T, but all of those properties are marked as optional.

// type person= {
//     name:string,
//     email:string,

// }

// type person2 = {
//     name?:string,
//     email?:string,
// }

// type person2 = Partial<person>

// 2. Required<type> same as opposite of Partial
// 3. readonly<type> 

// type person= {
//     name:string,
//     email:string,

// }

// const user :Readonly<person> ={
// name :"furfur",
// email:"furfur@mail.com"
// }

// user.email="mkm"  it will throw an error

// 4.Pick<type , Keys>

// interface orderDetails {
// city : string,
// readonly id : number,
// product : string,
// date : string,

// }

// type shippingDetails = Pick<orderDetails , "city"|"product"> 

// 5.Omit<type , Keys>

// interface orderDetails {
// city : string,
// readonly id : number,
// product : string,
// date : string,

// }

// type shippingDetails = Omit<orderDetails , "city"|"product"> 

// // 6.Exclude

// type myUnion = string | number | boolean;

// type Random =Exclude <myUnion , boolean>

// 6.Extract

type myUnion = string | number | boolean;

type Random =Extract <myUnion , boolean>
