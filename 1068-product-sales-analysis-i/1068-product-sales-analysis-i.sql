# Write your MySQL query statement below
select b.product_name, a.year, a.price from Sales a JOIN Product b
where a.product_id = b.product_id 
