delimiter ||
create procedure display_info()
select * from employees;
end ||

call display_info();

drop procedure display_info;

delimiter &&
create procedure display_dept(in id int)
begin
select * from employees where department_id = id;
end &&

call display_dept(60);
call display_dept(50);

delimiter &&
create procedure update_sal(in id int,amnt int)
begin
update employees set salary = salary + amnt where employee_id = id;
end &&

select * from employees;

call update_sal(103,10000);

select * from employees;

select * from employees;

create view personal_info as select first_name,last_name,salary from employees;

select * from personal_info;

select * from dept;

drop view dept;

create view dept50 as select * from employees where department_id = 50;

update dept set salary=salary+10000 where employee_id = 124;

select * from employees;