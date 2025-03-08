drop table student;

create table student
(
id int not null unique,
name varchar(25) not null,
english int default 20,
maths int default 20,
science int not null,
total int
);

create trigger add_data
before insert on 20_december.student
for each row
set new.total = new.english+new.maths+new.science;

insert into student(id,name,english,maths,science) values(101,'Rohan',45,25,39);
insert into student(science,id,name) values(23,102,'Dhyan');
insert into student(id,name,maths,science) values(103,'Natu',48,45);

select * from student;

create table delete_data
(
sid int,
name varchar(25),
total int,
record time
);

create trigger del_data
before delete on 20_december.student
for each row
insert into delete_data values(old.id,old.name,old.total,curtime());

select * from delete_data;

delete from student where id = 101;

select * from student;
select * from delete_data;

create table new_data
(
sid int,
name varchar(25),
record time
);

create trigger copy_data
after insert on 20_december.student
for each row
insert into new_data values(new.id,new.name,curtime());

select * from new_data;

insert into student(id,name,english,maths,science) values(104,'Tisha',25,43,39);

select * from new_data;