# Write your MySQL query statement below
select  b.unique_id,a.name from Employees a LEFT JOIN
EmployeeUNI b ON b.id=a.id

