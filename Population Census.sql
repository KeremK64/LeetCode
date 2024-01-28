SELECT SUM(Ci.population)
FROM Country C, City Ci
WHERE C.Code = Ci.CountryCode
GROUP BY Continent
HAVING Continent = "Asia"

