<?php

@$Username=$_POST['Username'];
@$Email=$_POST['Email'];
@$Password=$_POST['Password'];
$conn= new mysqli('localhost:3306','root','','cosmatic');
if($conn->connect_error)
{
    echo "$conn->connect_error";
    die("connection failed:" .$conn->connect_error);
}
else{
    $stmt=$conn->prepare("insert into account(Username,Email,Password)values(?,?,?)");
    $stmt->bind_param("sss",$Username,$Email,$Password);
    $execval=$stmt->execute();
    echo $execval;
    echo "registration successfully";
    $stmt->close();
   $stmt->close();
}
?>