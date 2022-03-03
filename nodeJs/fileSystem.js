const fs = require('fs')
//non blocking function
fs.readFile('file.txt' , 'utf8' , (err,data)=>{
    console.log(err,data);
})

console.log("reading finished")


// blocking function
const a = fs.readFileSync('file.txt');
console.log(a.toString());

console.log("reading finished")



// blocking writefile fn
fs.writeFile("file.txt" , "program executing" , ()=>{
    console.log("writing is finished")
})
console.log("reading is finished ")


// non blocking 
const b = fs.writeFileSync('file2.txt', "hey ");
console.log("writing is finished");
