# Write your MySQL query statement below
select name from Employee 
JOIN  (
    select managerId from Employee 
    group by managerId
    having count(managerId)>=5
) e2 on e2.managerId = Employee.id