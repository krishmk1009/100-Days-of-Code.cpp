
Array.prototype.myReduce = function (cb, initialValue){
    
    let accu = initialValue;
    
    for(let i =0;i<this.length; i++){
        
        accu = accu ? cb(accu , this[i] , i , this):this[i]; 
    }
    return accu;
}
