const newArr = [1,2,3,4,5];

// newArr.map((num , i , newArr)=> {
//     return num*3})
// console.log(newArr);


Array.prototype.myMap= function(cb){

    const temp = [];

    for(let i =0;i<this.length;i++){

        temp.push(cb(this[i] , i ,this));
    }
    return temp;
}

 const multiplyArr = newArr.myMap((num , i , newArr)=> {
    return num*3})
console.log(multiplyArr);
