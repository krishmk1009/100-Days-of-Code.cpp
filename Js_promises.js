
let value;
const promise = new Promise(function (resolve, reject) {

     value = Math.random();


    if (value > 0.5) {
        resolve("succesfully resolved");

    }

    else {
        reject("failed");
    }



});

promise.then(function (result) {
    console.log(value)
    console.log("succesfl")
})
    .catch(function (result) {
        console.log(value)
        console.log("failed")
    })



