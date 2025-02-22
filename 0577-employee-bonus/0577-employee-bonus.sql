# Write your MySQL query statement below
select e.name, b.bonus 
from Employee e 
Left Join Bonus b 
on e.empId=b.empId
where bonus<1000 or b.bonus is NULL;