# Write your MySQL query statement below
SELECT ad.actor_id, ad.director_id
FROM ActorDirector as ad
GROUP BY ad.actor_id, ad.director_id
HAVING COUNT(*) >= 3
