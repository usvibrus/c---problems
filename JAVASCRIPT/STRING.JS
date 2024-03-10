//NOTE - Strings are immutable: Strings cannot be changed, only replaced.





//ALL STRINGS METHODS MUST KNOW

let str = "asdfghjkl"

let t = str.slice(5); // retrun from index 5 till last
let m = str.slice(3,5);//return from 3 till 5 index 

// 3 methods fro extracting string parts // all  wors same as slice 
slice(start, end)
substring(start, end)
substr(start, length)



----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Replacing String Content //imp

let str = "my name is uday";

str.replace("uday","ankit"); // my name is ankit
//replace returns a new string does mot modifies main string

//The replace() method replaces only the first match

//If you want to replace all matches, use a regular expression with the /g flag set. See examples below.

let text = "Please visit Microsoft and Microsoft!";
let newText = text.replace(/Microsoft/g, "W3Schools"); // this regular expression will replace all the strigns which matches , replace will only return first match
//replace is case sensetive  

replaceAll("Cats","Dogs"); //
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//uppercase lowercase
let text1 = "Hello World!";
let text2 = text1.toUpperCase();

----------------------------------------------------------------------------------------------------------------------------------------------

//concat 

// concat() joins two or more strings 


let text ="4"
let text2="4"

