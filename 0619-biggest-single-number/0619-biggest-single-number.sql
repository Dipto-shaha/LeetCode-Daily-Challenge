select max(num) as num from 
(   SELECT num
    FROM MyNumbers
    GROUP BY num
    having COUNT(*)=1 
) as tab
