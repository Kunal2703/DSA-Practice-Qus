-- Active: 1697386701896@@127.0.0.1@3306@practiceQuestions

--To write a query to fetch different column data from 5 different tables.

CREATE TABLE Customers (
    CustomerID INT PRIMARY KEY,
    CustomerName VARCHAR(255),
    Email VARCHAR(255)
);

INSERT INTO CUSTOMERS (`CustomerID`, `CustomerName`, `Email`) 
VALUES (1, 'John Doe', 'johndoe@example.com'),
       (2, 'Jane Smith', 'janesmith@example.com');

CREATE TABLE Orders(
    OrderID INT PRIMARY KEY,
    CustomerID INT,
    OrderDate DATE,
    TotalAmount DECIMAL(10,2),
    shipperID INT
);

INSERT INTO Orders (OrderID, CustomerID, OrderDate, TotalAmount, ShipperID)
VALUES (101, 1, '2023-10-15', 250.00, 1),
       (102, 2, '2023-10-16', 150.00, 2);

CREATE TABLE Products(
    ProductID INT PRIMARY KEY,
    ProductName VARCHAR(255),
    Price DECIMAL(10,2)
);

INSERT INTO Products (ProductID, ProductName, Price)
VALUES (501, 'Product A', 25.00),
       (502, 'Product B', 30.00);


CREATE TABLE OrderDetails(
    OrderDetailsID INT PRIMARY KEY,
    OrderID INT,
    ProductID INT,
    Quality INT
);

INSERT INTO OrderDetails (OrderDetailsID, OrderID, ProductID, Quality)
VALUES (1001, 101, 501, 3),
       (1002, 102, 502, 2);


CREATE TABLE Shippers(
    ShipperID INT PRIMARY KEY,
    ShipperName VARCHAR(255)
);

INSERT INTO Shippers (ShipperID, ShipperName)
VALUES (1, 'Shipper X'),
       (2, 'Shipper Y');



--To write a query to fetch different column data from 5 different tables.
SELECT
    C.CustomerName,
    O.OrderDate,
    P.ProductName,
    Q.Quality,
    S.ShipperName
FROM
    Customers AS C
JOIN
    `Orders` AS O ON C.`CustomerID` = O.`CustomerID`
JOIN
    `OrderDetails` AS Q ON O.`OrderID` = Q.`OrderID`
JOIN
    `Products` AS P ON Q.`ProductID` = P.`ProductID`
JOIN
    `Shippers` AS S ON O.`shipperID` = S.`ShipperID`
