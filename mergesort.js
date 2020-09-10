/*
merge sort is a divide and conquer algorithm.
 The goal being to break down our problem into sub-problems and recursively continue to break those down
  until we have a lot of simple problems that we can easily put back together.
 */
const Mergesort = (arr) => {
   // recursion base case
// it checks if the array length is less than or equal to 1.
// if that's the case return the arr else keep splicing.
    if (arr.length === 1) {
      return arr;
    }
    let mid =Math.floor(arr.length/2);
    let left = Mergesort(arr.slice(0,mid))
    let right = Mergesort(arr.slice(mid))
    
    return merge(left,right)

} 
const merge = (left,right) => {
    
    let storage=[];
    let rightindex =0;
    let leftindex =0;
    
  while (leftindex < left.length && rightindex < right.length) {
    if (left[leftindex]<right[rightindex]) {
        storage.push(left[leftindex])
        leftindex ++
    }
    else{
        storage.push(right[rightindex])
        rightindex ++

    }
        

   

}
return storage.concat(left.slice(leftindex)).concat(right.slice(rightindex))
  }
       
console.log(Mergesort([3,5,4,2]))