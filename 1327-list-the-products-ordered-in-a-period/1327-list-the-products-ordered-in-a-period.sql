select P.product_name ,sum(O.unit) as unit from Products as P
join (select * from Orders where order_date >= '2020-02-01' AND order_date < '2020-03-01') as O on P.product_id=O.product_id
group by P.product_id
having sum(O.unit)>=100