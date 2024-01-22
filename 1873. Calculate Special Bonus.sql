# Write your MySQL query statement below
SELECT e.employee_id, e.salary AS bonus
FROM employees e
WHERE e.name NOT LIKE "M%" AND MOD(e.employee_id, 2) = 1
UNION
SELECT e.employee_id, 0 AS bonus
FROM employees e
WHERE e.name LIKE "M%" OR MOD(e.employee_id, 2) != 1

ORDER BY employee_id
