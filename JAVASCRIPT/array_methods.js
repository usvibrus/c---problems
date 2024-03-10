

const arr = [1,2,3,4,5];


const sample = arr.map((a)=>{

    a++;

})console.log(sample) // 2 3 4 5 6


// .filter

The filter() method creates a new array with all elements that pass the condition , provided by function.
//moslty use to search any element of arr or text from string


const num = [1,2,3,4,5];


const filter = num.filter((a)=>{a%2===0}) 

//this will return new arr with only values that follow the condition



//.reduce

reduce:

The reduce() method applies a function against an accumulator and each element in the array (from left to right) to reduce it to a single value.



const num = [1,2,3,4,5];

const total = num.reduce((sum,a)=>sum+=a,0) ///0 is initial value of sum , 
console.log(total) // return 15 