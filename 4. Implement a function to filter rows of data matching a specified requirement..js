
function filteredDataFun (data , filterFun){

    let ans = [];


for(const row of data){
    if(filterFun(row)){
        ans.push(row);
    }
}

    return ans;
    
}

const data = [
  { name: 'Alice', age: 30 },
  { name: 'Bob', age: 25 },
  { name: 'Charlie', age: 35 },
  { name: 'David', age: 28 },
];


function filterFun(row){
   return row.age >= 30;
}


const filteredData = filteredDataFun(data, filterFun)
console.log(filteredData)
