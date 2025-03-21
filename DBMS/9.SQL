BEGIN
	DBMS_OUTPUT.PUT_LINE('HELLO WORLD!');
	DBMS_OUTPUT.PUT_LINE('HOW ARE YOU?');
END;

BEGIN
	DBMS_OUTPUT.PUT('HELLO WORLD!');
	DBMS_OUTPUT.PUT_LINE(' HOW ARE YOU?');
END;

BEGIN
	DBMS_OUTPUT.PUT('HELLO WORLD!');
	DBMS_OUTPUT.PUT(' HOW ARE YOU?');
	DBMS_OUTPUT.PUT_LINE('');
END;

-- DECLARATION
DECLARE
	NUM NUMBER := 30;
BEGIN
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF NUM = '||NUM);
END;

-- BLOCKS IN PL/SQL
DECLARE -- FIRST BLOCK
	X NUMBER := 10;
BEGIN
	DECLARE -- SECOND BLOCK
		Y NUMBER := 20;
	BEGIN
		DECLARE -- THIRD BLOCK
			Z NUMBER := 30;
		BEGIN
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF Z = '||Z);
		END; -- THIRD BLOCK
		DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
		DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
	END; -- SECOND BLOCK
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
END; -- FIRST BLOCK

-- ARITHMETIC OPERATIONS
DECLARE
	X NUMBER := 10;
	Y NUMBER := 20;
BEGIN
	DBMS_OUTPUT.PUT_LINE('THE ADDITION OF '||X||' AND '||Y||' IS = '||(X+Y));
	DBMS_OUTPUT.PUT_LINE('THE SUBTRACTION OF '||X||' AND '||Y||' IS = '||(X-Y));
	DBMS_OUTPUT.PUT_LINE('THE MULTIPLICATION OF '||X||' AND '||Y||' IS = '||(X*Y));
	DBMS_OUTPUT.PUT_LINE('THE DIVISION OF '||X||' AND '||Y||' IS = '||(X/Y));
	DBMS_OUTPUT.PUT_LINE('THE REMAINDER OF '||X||' AND '||Y||' IS = '||MOD(X,Y));
END;

-- CONDITIONAL STATEMENTS
-- SIMPLE IF...ELSE
DECLARE
	NUM NUMBER := 14;
BEGIN
	IF MOD(NUM,2) = 0 THEN
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN EVEN NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN ODD NUMBER');
	END IF;
END;

-- LADDER IF...ELSE
DECLARE
	N1 NUMBER := 50;
	N2 NUMBER := 20;
	N3 NUMBER := 30;
BEGIN
	IF N1>N2 AND N1>N3 THEN
		DBMS_OUTPUT.PUT_LINE(N1||' IS A BIGGEST NUMBER');
	ELSIF N2>N1 AND N2>N3 THEN
		DBMS_OUTPUT.PUT_LINE(N2||' IS A BIGGEST NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(N3||' IS A BIGGEST NUMBER');
	END IF;
END;

-- NESTED IF...ELSE
DECLARE
	N1 INT := 50;
	N2 NUMBER := 80;
	N3 NUMBER := 30;
BEGIN
	IF N1>N2 THEN
    	IF N1>N3 THEN
    		DBMS_OUTPUT.PUT_LINE(N1||' IS THE BIGGEST NUMBER');
		ELSE
            DBMS_OUTPUT.PUT_LINE(N3||' IS THE BIGGEST NUMBER');
		END IF;
	ELSE
        IF N2>N3 THEN
        	DBMS_OUTPUT.PUT_LINE(N2||' IS THE BIGGEST NUMBER');
		ELSE
            DBMS_OUTPUT.PUT_LINE(N3||' IS THE BIGGEST NUMBER');
		END IF;
	END IF;
END;

-- SIMPLE LOOP
DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE('HELLO WORLD');
		IF I=5 THEN
            EXIT;
		END IF;
		I := I+1;
	END LOOP;
END;

DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE('HELLO WORLD');
		EXIT WHEN I=5;
		I := I+1;
	END LOOP;
END;

-- FOR LOOP
BEGIN
	FOR X IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'.HELLO WORLD');
	END LOOP;
END;

DECLARE
	X NUMBER := 5;
BEGIN
	FOR I IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'.HELLO WORLD');
		X := X-1;
	END LOOP;
END;

-- WHILE LOOP
DECLARE 
	X NUMBER := 1;
BEGIN
	WHILE X<=5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'.HELLO WORLD');
		X := X+1;
	END LOOP;
END;

DECLARE
	FNAME VARCHAR(25);
	LNAME VARCHAR(25);
	SAL NUMBER;
BEGIN
	SELECT FIRST_NAME,LAST_NAME,SALARY INTO FNAME,LNAME,SAL FROM EMPLOYEES WHERE EMPLOYEE_ID = 107;
	DBMS_OUTPUT.PUT_LINE('FIRST_NAME = '||FNAME);
	DBMS_OUTPUT.PUT_LINE('LAST_NAME = '||LNAME);
	DBMS_OUTPUT.PUT_LINE('SALARY = '||SAL);
END;

-- EXPLICIT CURSOR
DECLARE
	FNAME EMPLOYEES.FIRST_NAME%TYPE; 
	LNAME EMPLOYEES.LAST_NAME%TYPE;
	SAL EMPLOYEES.SALARY%TYPE;
	I NUMBER := 1;
	CURSOR EMP IS SELECT FIRST_NAME,LAST_NAME,SALARY FROM EMPLOYEES;
BEGIN
	OPEN EMP;
	LOOP
	FETCH EMP INTO FNAME,LNAME,SAL;
		DBMS_OUTPUT.PUT_LINE(I||'.'||FNAME||' '||LNAME||' ---> '||SAL);
		I:=I+1;
	EXIT WHEN EMP%NOTFOUND;
	END LOOP;
	CLOSE EMP;
END;

-- IMPLICIT CURSOR
DECLARE
	ROW_NUMBER NUMBER := 0;
BEGIN
	UPDATE EMPLOYEES SET SALARY = SALARY + 10000 WHERE DEPARTMENT_ID = 600;
	IF SQL%FOUND THEN
		ROW_NUMBER := SQL%ROWCOUNT;
	ELSE
		DBMS_OUTPUT.PUT_LINE('NO EMPLOYEES UPDATED');
	END IF;
	DBMS_OUTPUT.PUT_LINE('UPDATED EMPLOYEES = '||ROW_NUMBER);
END;

SELECT * FROM EMPLOYEES WHERE DEPARTMENT_ID = 60;