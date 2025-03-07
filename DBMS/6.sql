create table users
(
user_id int primary key,
name varchar(25) not null,
age int not null
);

create table orders
(
order_id int not null unique,
order_name varchar(25) not null,
user_id int not null,
foreign key orders(user_id) references users(user_id)
);

insert into users values(101,'Rohan',12);
insert into users values(102,'Rahul',22);
insert into users values(103,'Dhyan',42);
insert into users values(104,'Roshani',35);
insert into users values(105,'Rohini',30);

select * from users;

insert into orders values(1,'Brush',101);
insert into orders values(2,'Toothpaste',101);
insert into orders values(3,'Comb',105);
insert into orders values(4,'Soap',103);
insert into orders values(5,'Shampoo',103);

select * from orders;

select * from users natural join orders;

select users.user_id,users.name,orders.order_name from 
users inner join orders
on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_name from 
users left join orders
on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_name from 
users right join orders
on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_name from 
users full join orders
on users.user_id = orders.user_id;

select * from users
cross join
orders;