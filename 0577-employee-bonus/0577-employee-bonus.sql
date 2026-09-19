# Write your MySQL query statement below
select Employee.name,Bonus.bonus from Employee left join bonus on Employee.empId=Bonus.empid where bonus <1000 or bonus is null;
