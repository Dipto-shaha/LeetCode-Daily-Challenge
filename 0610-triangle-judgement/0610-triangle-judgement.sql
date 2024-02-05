select x,y,z,
    ( CASE when 
            (x+y>z and y+z>x and z+x>y and x!=0 and y!=0 and z!=0) then "Yes" 
           ELSE "No" END ) as triangle 
from Triangle