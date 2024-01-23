# Write your MySQL query statement below
SELECT temp.name AS Customers
FROM (SELECT c.id, c.name
    FROM Customers c
    EXCEPT
    SELECT c.id, c.name
    FROM Customers c, Orders o
    WHERE c.id = o.customerId) AS temp

