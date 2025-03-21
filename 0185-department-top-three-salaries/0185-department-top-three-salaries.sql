# Write your MySQL query statement below
with Ranked_salary as (
select d.name as Department, e.name as Employee, e.salary as Salary, 
dense_rank() over(
Partition by e.departmentId
order by e.salary desc
) as ranking
from Employee e
join Department d
on e.departmentId = d.id
)
select Department, Employee, Salary from Ranked_salary where ranking <= 3;