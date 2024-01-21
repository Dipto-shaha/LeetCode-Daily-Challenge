select Project.project_id , 
       ROUND(SUM(Employee.experience_years)/SUM(
           CASE when Employee.experience_years >= 0 then 1 else 0 END
       ) ,2) as average_years
from   Project 
join Employee on
     Project.employee_id=Employee.employee_id
group by Project.project_id