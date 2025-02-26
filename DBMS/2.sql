create schema 20_december;

create table student
(
id int not null unique,
name varchar(25) not null,
cgpa float not null
);

select id,name from student;

insert into student values(101,'Ramesh',9.5);

select id,name from student;

select * from student;

insert into student values(102,'Rohan',7.5);

select * from student;

update student set cgpa = 6.5;

select * from student;

update student set cgpa = 8.5 where id = 101;

select * from student;

update student set cgpa = 7.5 where id = 101;

select * from student;

delete from student where id = 101;

select * from student;