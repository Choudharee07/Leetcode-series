# Write your MySQL query statement below
select a.id as Id from weather a join weather b on a.recordDate=Date_add(b.recordDate, interval 1 day)
where a.temperature > b.temperature ;
