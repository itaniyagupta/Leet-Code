select D.Name as Department, E.name as Employee, E.salary from Employee E, Department D 
  WHERE E.DepartmentId = D.id 
  AND (DepartmentId,Salary) in 
  (SELECT DepartmentId,max(Salary) as max FROM Employee GROUP BY DepartmentId)