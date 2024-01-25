# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e, Employee e1
WHERE e.managerId = e1.id AND e.salary > e1.salary
