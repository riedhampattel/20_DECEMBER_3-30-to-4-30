create table employees
(
employee_id int not null unique,
first_name varchar(25) not null,
last_name varchar(25) not null,
hire_date date not null,
salary int,
commission_pct float,
manager_id int,
department_id int
);

insert into employees values (100,'Steven','King','1987-07-17',24000,null,null,90);

select * from employees;

select employee_id,first_name,last_name,salary from employees;

select * from employees;

select * from employees where department_id = 90;

select * from employees where department_id != 90;

select * from employees where department_id = 90 or department_id = 60;

select * from employees where department_id = 60 and manager_id = 102;

select * from employees where salary>=10000 and salary<=20000;

select employee_id,first_name,salary*12 as annual_salary from employees;

select * from employees;

select employee_id,first_name as name from employees;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where (department_id,manager_id) in ((90,100),(60,102));

select * from employees where (department_id,manager_id) not in ((90,100),(60,102));

select * from employees order by salary;

select * from employees order by salary desc;

select * from employees order by 2;

select employee_id,first_name,salary as income from employees order by income;

select employee_id,first_name,salary as income from employees;

select distinct department_id from employees;

select * from employees;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select * from employees where first_name like 'S%';

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%e%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-JU_-%';

select * from employees where hire_date like '%-J_N-%';

select max(salary) from employees;

select min(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(commission_pct) from employees;

select department_id,max(salary) from employees group by department_id having max(salary)>10000;

select department_id,count(*) from employees where salary>10000 group by department_id order by 2;

select * from employees order by salary desc;

select * from employees order by salary desc limit 5;

select * from employees order by salary limit 5;

select * from employees order by salary desc limit 10 offset 5;

select first_name,last_name,salary from employees where salary=(select max(salary) from employees);

select first_name,last_name,salary from employees where salary=(select min(salary) from employees) or salary=(select max(salary) from employees);

select first_name,last_name from employees;

select concat(first_name,' ',last_name) as full_name from employees;

select concat(last_name,"'s monthly salary is ",salary) from employees;

select * from employees where manager_id not in (124,149,100);

select count(hire_date) from employees where hire_date between '1991-01-01' and '1995-12-31';

select count(distinct manager_id) from employees;

select * from employees;

select count(last_name) from employees where last_name like 'Z%' or last_name like '%z';

select last_name from employees where last_name like 'Z%' or last_name like '%z';