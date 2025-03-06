create role Admin;

create user Rohan identified by 'abc@123' default role Admin;

grant select on employees to Rohan;

grant update,delete on employees to Rohan;

revoke update on employees from Rohan;

revoke delete,select on employees from Rohan;