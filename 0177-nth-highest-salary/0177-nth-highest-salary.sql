CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare offset_value int;
set offset_value = N-1;
  RETURN (
      # Write your MySQL query statement below.
    select distinct salary
    from Employee
    order by salary desc
    limit 1 offset offset_value
  );
END