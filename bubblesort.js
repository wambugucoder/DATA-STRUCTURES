/*
Bubble Sort is a method for sorting arrays by comparing each array element to the element behind it.
 So, if you had an array with [3,5,4, 2] the bubble sort function would compare "3" to "5" 
 then compare "5" to "4" and so on until the array is sorted.

*/
const Bubblesort = (arr) => {
    var swapped;
    do {
        swapped=false;
        for (let i = 0; i < arr.length -1; i++) {
          if (arr[i] > arr[i+1]) {
              let temporary=arr[i]
              arr[i]=arr[i+1]
              arr[i+1]=temporary
              swapped=true;
          }

        
        }  
    } while (swapped)
     return arr;
}
console.log(Bubblesort([3,5,4,2]))