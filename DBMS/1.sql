create schema 20_december;

create table student
(
id int not null unique,
name varchar(25) not null,
cgpa float not null
);

describe student;

-- rename table
alter table student rename to employees;

describe student;

describe employees;

-- rename column
alter table employees rename column cgpa to commission_pct;

describe employees;

-- add column
alter table employees add column first_name varchar(25) not null;

describe employees;

alter table employees add column last_name varchar(25) not null;

describe employees;

-- delete column
alter table employees drop column last_name;
alter table employees drop column first_name;
alter table employees drop column name;

describe employees;

-- add column at specific position
alter table employees add column first_name varchar(25) not null after id;
alter table employees add column last_name varchar(25) not null after first_name;

describe employees;

alter table employees modify commission_pct float;

alter table employees modify commission_pct int;

describe employees;

drop table employees;

describe employees;

drop schema 20_december;