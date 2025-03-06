select * from employees;

update employees set salary = salary + 10000 where department_id = 90;

update employees set salary = salary + 5000 where department_id = 60;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

commit;

rollback;

select * from employees;

savepoint s1;
delete from employees where employee_id = 103;
savepoint s2;
delete from employees where employee_id = 104;
savepoint s3;
delete from employees where employee_id = 107;

select * from employees;

rollback to s2;

rollback to s1;

select * from employees;