# Write your MySQL query statement below
SELECT temp.salary AS SecondHighestSalary
FROM ((SELECT e2.salary 
        FROM Employee e2
        EXCEPT
        SELECT e1.salary
        FROM Employee e1
        WHERE e1.salary >= ALL(SELECT e3.salary
                           FROM Employee e3))
                           UNION
                           SELECT null AS salary
                           FROM Employee e15) AS temp
WHERE temp.salary >= ALL(SELECT e2.salary 
        FROM Employee e2
        EXCEPT
        SELECT e1.salary
        FROM Employee e1
        WHERE e1.salary >= ALL(SELECT e3.salary
                           FROM Employee e3))
