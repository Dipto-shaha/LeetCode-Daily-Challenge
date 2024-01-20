select Prices.product_id,   
   round(COALESCE(SUM(Prices.price*UnitsSold.units)/sum(UnitsSold.units),0),2)as average_price
from Prices left join UnitsSold
on Prices.product_id=UnitsSold.product_id and 
   Prices.start_date<=UnitsSold.purchase_date and 
   Prices.end_date>=UnitsSold.purchase_date
group by Prices.product_id

