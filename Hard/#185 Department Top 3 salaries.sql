select D.Name as Department, E.name as Employee, E.salary from Employee E
  Join Department D on E.DepartmentId = D.id 
    Where
  (SELECT count( DISTINCT Salary ) FROM Employee WHERE Salary > E.Salary and DepartmentId = E.DepartmentId ) < 3 
   ORDER BY D.NAME, E.Salary DESC;
