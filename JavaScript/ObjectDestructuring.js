
/* 
------------------------------------------------------------------------------------------------
USERNAME: VAIBHAVD74
DESCRIPTION: THIS PROGRAM SHOW US HOW TO DO DESTRUCTING IN JAVASCRIPT
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/


// Program demonstrating Object destructuring in Javascript

// here i defined the object
const obj = {
  name: "Vaibhav",
  address: {
    country: "India",
    city: "Delhi",
  },
};

// now by using curly braces i am extracting data by giving key name 
const greetUser = ({ name, address: { country } }) => {
  // here i am using template literals to show result to user
  console.log(`Hello to ${name} from ${country}`);
};

greetUser(obj);
// calling of function with obj param
