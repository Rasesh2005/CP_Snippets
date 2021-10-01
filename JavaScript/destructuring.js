
/* 
------------------------------------------------------------------------------------------------
USERNAME: VAIBHAVD74
DESCRIPTION: THIS PROGRAM SHOW US HOW TO DO DESTRUCTING IN JAVASCRIPT
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/


// Program demonstrating Object destructuring in Javascript

const obj = {
  name: "Vaibhav",
  address: {
    country: "India",
    city: "Delhi",
  },
};

const greetUser = ({ name, address: { country } }) => {
  console.log(`Hello to ${name} from ${country}`);
};

greetUser(obj);
