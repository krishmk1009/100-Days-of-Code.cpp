Array.prototype.myFilter = function (cb){
    
    const temp = [];
    
    for(let i=0;i<this.length;i++){
        if(cb(this[i] , i , this)){
            temp.push(this[i]);
        }
    }
    
    return temp;
}

const numbers = [1, 2, 3, 4, 5];

const filteredNumbers = numbers.myFilter(num => num % 2 === 0);

console.log(filteredNumbers); // Output: [2, 4]
