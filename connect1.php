<?php
#error_reporting(0);
$email=$_POST['Email'];
$password=$_POST['Password'];
$conn= new mysqli('localhost:3306','root','','madhuri');
if($conn->connect_error)
{
    echo "$conn->connect_error";
    die("connection failed:" .$conn->connect_error);
}
else{
    $stmt=$conn->prepare("insert into login(Email,Password)values(?,?)");
    $stmt->bind_param("ss",$email,$password);
    $execval=$stmt->execute();
    echo $execval;
    echo "registration successfully";
    $stmt->close();
    $stmt->close();
}
?>