<!DOCTYPE html>
<html>
  <head>
    <title>this is what shows as the title on the tab</title>
  </head>


  <body>

    <h1>title of ur page</h1>
    <p>instructions go here</p>

    <?php
       $num1 = $num2 = $operator = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $num1 = test_input($_POST["num1"]);
            $num2 = test_input($_POST["num2"]);
         $operator = test_input($_POST["operator"]);
         exec("/usr/lib/cgi-bin/student3/finalprojectMake  " . $num1 . " " . $num2. " " . $operator, $output, $retc);
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
/usr/lib/cgi-bin/student3/finalproject.c
/usr/lib/cgi-bin/student1/finalproject.c
