// var numbers = [3, 56, 2, 48, 5];

//Map -Create a new array by doing something with each item in an array.
// 1.1

// const newNumbers = numbers.map(function (x) {
//   return x * 2;
// });

// console.log(newNumbers);
// 1.2

// const newNum = [];

// numbers.forEach(function (x) {
//   newNum.push(x * 2);
// });
// console.log(newNum);

//Filter - Create a new array by keeping the items that return true.
// 2.1

// const newNum = numbers.filter(function (x) {
//   if (x > 10) {
//     return x;
//   }
// });
// console.log(newNum);

// 2.2

// const newNumbers = [];

// numbers.forEach(function (x) {
//   if (x < 10) {
//     newNumbers.push(x);
//   }
// });
// console.log(newNumbers);

//Reduce - Accumulate a value by doing something to each item in an array.

// var numbers = [3, 56, 2, 48, 5];
// 3.1

// var num = 0;
// numbers.forEach(function (x) {
//   num = num + x;
// });

// console.log(num);
// 3.2

// var ans = numbers.reduce(function (accumlator, currentNum) {
//   console.log(accumlator);
//   return accumlator + currentNum;
// });

// console.log(ans);

//Find - find the first item that matches from an array.

//FindIndex - find the index of the first item that matches.

// var numbers = [3, 56, 2, 48, 5];
// const num = numbers.find(function (x) {
//   if (x > 10) {
//     return x;
//   }
// });
// console.log(num);
