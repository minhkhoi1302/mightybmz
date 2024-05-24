<?php
$mysqli = new mysqli("localhost", "root", "root", "phonebook");
if ($mysqli->connect_error) {
    die("Connection failed: " . $mysqli->connect_error);
}
$result = $mysqli->query("SELECT * FROM contacts_table");
if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET['delete'])) {
    $id = $_GET['delete'];
    $sql = "DELETE FROM contacts_table WHERE id=$id";
    if ($mysqli->query($sql) === TRUE) {
        echo "Contact deleted successfully";
    } else {
        echo "Error deleting contact: " . $mysqli->error;
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>phonebook</title>
    <style>
        table {
            width: 100%;
            border-collapse: collapse;
        }
        table, th, td {
            border: 1px solid black;
            padding: 8px;
            text-align: left;
        }
    </style>
</head>
<body>
    <h1>phonebook contacts</h1>
    <table>
        <thead>
            <tr>
                <th>id</th>
                <th>name</th>
                <th>phone number</th>
                <th>actions</th>
            </tr>
        </thead>
        <tbody>
            <?php while ($row = $result->fetch_assoc()): ?>
                <tr>
                    <td><?php echo $row['id']; ?></td>
                    <td><?php echo $row['name']; ?></td>
                    <td><?php echo $row['phone_number']; ?></td>
                    <td>
                        <a href="edit_contact.php?id=<?php echo $row['id']; ?>">edit</a>
                        <a href="index.php?delete=<?php echo $row['id']; ?>">delete</a>
                    </td>
                </tr>
            <?php endwhile; ?>
        </tbody>
    </table>
    <a href="add_contact.php">add contact</a>
</body>
</html>

<?php
$mysqli->close();
?>