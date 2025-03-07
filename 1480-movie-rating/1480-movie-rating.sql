# Write your MySQL query statement below
with ratings as(
    select mr.user_id, u.name, count(*) as count_r
    from MovieRating mr
    join Users u
    on mr.user_id = u.user_id
    group by mr.user_id, u.name
),
ranking as(
    select name
    from ratings
    order by count_r desc, name asc
    limit 1
),
avg_rating as (
    select mr.movie_id, m.title, avg(rating) as avg_r
    from MovieRating mr
    join Movies m
    on mr.movie_id = m.movie_id
    where created_at between '2020-02-01' and '2020-02-29'
    group by mr.movie_id, m.title
),
avg_rank as(
    select title
    from avg_rating
    order by avg_r desc, title asc
    limit 1
)
select name as results
from ranking 
union all 
select title from avg_rank;