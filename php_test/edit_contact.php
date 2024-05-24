<?php
$mysqli = new mysqli("localhost", "root", "root", "phonebook");
if ($mysqli->connect_error) {
    die("Connection failed: " . $mysqli->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = $_POST['id'];
    $name = $_POST['name'];
    $phone_number = $_POST['phone_number'];

    $sql = "UPDATE contacts_table SET name='$name', phone_number='$phone_number' WHERE id=$id";
    if ($mysqli->query($sql) === TRUE) {
        echo "Contact updated successfully";
    } else {
        echo "Error updating contact: " . $mysqli->error;
    }
} else {
    $id = $_GET['id'];
    $result = $mysqli->query("SELECT * FROM contacts_table WHERE id=$id");
    $row = $result->fetch_assoc();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>edit contact</title>
</head>
<body>
    <h1>edit contact</h1>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <input type="hidden" name="id" value="<?php echo $row['id']; ?>">
        name: <input type="text" name="name" value="<?php echo $row['name']; ?>" required><br>
        phone number: <input type="text" name="phone_number" value="<?php echo $row['phone_number']; ?>" required><br>
        <input type="submit" value="Save">
    </form>
    <a href="index.php">back to contacts</a>
</body>
</html>

<?php
$mysqli->close();
?>
