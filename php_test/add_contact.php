<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $mysqli = new mysqli("localhost", "root", "root", "phonebook");
    if ($mysqli->connect_error) {
        die("Connection failed: " . $mysqli->connect_error);
    }

    $name = $_POST['name'];
    $phone_number = $_POST['phone_number'];

    $sql = "INSERT INTO contacts_table (name, phone_number) VALUES ('$name', '$phone_number')";
    if ($mysqli->query($sql) === TRUE) {
        echo "New contact added successfully";
    } else {
        echo "Error: " . $sql . "<br>" . $mysqli->error;
    }

    $mysqli->close();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>add contact</title>
</head>
<body>
    <h1>add contact</h1>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        name: <input type="text" name="name" required><br>
        phone number: <input type="text" name="phone_number" required><br>
        <input type="submit" value="Add">
    </form>
    <a href="index.php">back to contacts</a>
</body>
</html>