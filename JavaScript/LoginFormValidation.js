/* 
------------------------------------------------------------------------------------------------
USERNAME: ABHILASHKPY
DESCRIPTION: THIS PROGRAM VALIDATES USERNAME & PASSWORD IN LOGIN FORM
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/

<!DOCTYPE html>
<html>
  <head>
    <title>Jvascript Login Form</title>
    <script type = "text/javascript">
      function validateForm()  {
        var user = document.getElementById("username").value;
        var pass = document.getElementById("password").value;

        if(user== "") {
          alert("USERNAME:");
          return false;
           }
         if(pass == "") {
            alert("PASSWORD:");
           return false;
          }

         alert("Validation SUCCESS!!!!")

         return true;
         }
      </script>
   </head>
   <body>

  <h2>Enter your Username and Password</h2>

  <div style="border:1px solid #ddd; padding: 5px;">
  <form method="GET" action="PerformActoion.html" onsubmit = "return validateForm()">
   Username: <input type="text" name="username" id="username"/>
    <br><br>
    Password: <input type="password" name = "password" id="password"/>
    <br><br>
        <button type="submit">Submit</button>
     </form>
    </div>

   </body>
</html>


/* 
------------------------------------------------------------------------------------------------
DESCRIPTION: CODE TO PERFORM ACTION AFTER GETTING THE LOGIN DETAILS
------------------------------------------------------------------------------------------------
*/

<!DOCTYPE html>
<html>
   <head>
     <title>Perform Action</title>

  </head>
   <body>

     <h3>Perform Action Page</h3>

     Thank You, We have got the details!
      
      <br/><br/>

      <a href="javascript:history.back();">[Go Back]</a>

   </body>
</html>



