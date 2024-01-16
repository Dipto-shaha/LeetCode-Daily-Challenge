
select machine_id , round( 2*avg (case
    when activity_type = 'start' then -1 * timestamp
    else timestamp
    end ),3) as processing_time
from Activity 
group by machine_id