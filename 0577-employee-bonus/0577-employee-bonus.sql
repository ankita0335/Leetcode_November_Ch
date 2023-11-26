# Write your MySQL query statement below
select A1.name, A2.bonus from employee A1 left join
bonus A2 on A1.empId=A2.empId
where A2.bonus<1000 Or bonus is null