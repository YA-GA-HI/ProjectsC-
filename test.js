// function getSecondLargest(nums) {
//     // Complete the function
//     let result = 0  , bigNum = 0 ;
//     for(i =0 ; i< nums.length;i++)
//     {
//         if(nums[i]>bigNum)
//         {
//             bigNum = nums[i];
//         }
//     }
//     for(i =0 ; i< nums.length;i++)
//     {
//     if(nums[i]<bigNum && nums[i]>result )
//         {
//             result = nums[i]
//         }
//     }
//     return result;
// }
//console.log(getSecondLargest([5,2 ,3 ,6 ,6 ,8]));

// function vowelsAndConsonants(s) {
//     let notvowels = "";
//     for(let i = 0 ; i<s.length;i++)
//     {
//         let vowelsArr = ["a","e","i","o","u"];
//         let vowel = true;
//         for(let j = 0 ; j<s.length;j++)
//         {
//             if(vowelsArr[j] == s[i]){
//                 vowel =true ;
//                 break ;
//             //console.log('hhhh');
//             }else{
//                 vowel = false
//             }
//         }
//     //console.log(vowel)
//     vowel ? console.log(s[i]) : notvowels+=s[i]+"\n"  ;

//     }
//     console.log(notvowels);

// }

//vowelsAndConsonants("javascriptloops");





// function modifyArray(nums) {
//    return nums.map((num)=>{
//     if(num % 2 == 0 ){ return  num*2 }else{ return  num*3; } 
//    }) ;
// }

// console.log(modifyArray(ar))