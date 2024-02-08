select user_id,
       CONCAT(UPPER(MID(name, 1, 1)), LOWER(MID(name, 2))) as name
from Users
order by user_id
      