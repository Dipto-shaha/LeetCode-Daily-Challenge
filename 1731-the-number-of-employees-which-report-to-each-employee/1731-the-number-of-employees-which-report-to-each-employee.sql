select e.employee_id,
       e.name, 
       count(*) as reports_count,
       round(avg(em.age),0) as average_age
# select * 
from Employees as e join Employees as  em on e.employee_id= em.reports_to
group by e.employee_id
order by e.employee_id
