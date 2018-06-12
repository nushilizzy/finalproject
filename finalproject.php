<!DOCTYPE html>
<html>
  <head>
    <title>Final Project</title>
  </head>


  <body>

    <h1>Simple Calculator!</h1>
    <p>Type in an operator and two numbers.</p>

    <?php
       $num1 = $num2 = $operator = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $num1 = test_input($_POST["num1"]);
            $num2 = test_input($_POST["num2"]);
         $operator = test_input($_POST["operator"]);
         exec("/usr/lib/cgi-bin/student1/finalproject  " . $operator . " " . $num1. " " . $num2, $output, $retc);
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

   <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Operator: <input type="text" name="operator"><br>
      Number 1: <input type="text" name="num1"><br>
     Number 2: <input type="text" name="num2"><br>
      <input type="submit">
    </form>

    <?php
       echo "<h2>Output: </h2>";
       foreach ($output as $line) {
     echo $line;
     echo "<br>";
    }
     ?>

  </body>
</html>
