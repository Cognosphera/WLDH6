
##  Rising Temperature
```sql
select w1.Id from Weather w1 inner join Weather w2 on datediff(w1.Date, w2.Date) = 1 and w1.Temperature > w2.Temperature;
```

## Delete Duplicate Emails
```sql
delete p1 from Person p1 inner join Person p2 where p1.Email = p2.Email and p1.Id > p2.Id;
```

## Department Top Three Salaries
```sql
select d.Name Department, e.Name Employee, e.Salary from Employee e join Department d on e.DepartmentId=d.Id
where 3 > (select count(distinct(Salary)) from Employee ee where ee.DepartmentId=e.DepartmentId and Salary>e.Salary)
order by d.Id, e.Salary desc;
```

## Department Highest Salary
```sql
select d.Name Department, e.Name Employee, e.Salary from Employee e join Department d on e.DepartmentId=d.Id
where e.Salary = (select max(Salary) from Employee ee where ee.DepartmentId=e.DepartmentId);
```

mock

```sql
create table Employee(Id int, Name varchar(9),Salary int,DepartmentId int);
create table Department(Id int,Name varchar(9));
insert into Employee values(1,'joe',7,1),(2,'henry',8,2),(3,'sam',6,2),(4,'max',9,1);
insert into Department values(1,'it'),(2,'sales');
```

## Customers Who Never Order
```sql
select Name Customers from Customers c left join Orders o on c.Id=CustomerId where o.Id is null;
```

## Employees Earning More Than Their Managers
```sql
select Email from Person group by Email having count(*) > 1;
```

## Consecutive Numbers