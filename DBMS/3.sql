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