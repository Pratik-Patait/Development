ans = (a + b) *c;	//parenthesis operator

int Arr[5];	//Array subscript operator
printf("%d",Arr[1]);

struct Demo obj;
obj.1 = 11;// Direct accessing operator

struct Demo *p = &obj;	//unary operator pointer *
p-> = 11;	//Indirect accessing operator

ans = ++no; //Preincrement operator
ans = no++; //Postincrement operator

ans = --no; //Predecrement
ans = no--; //Postdecrement

int ans = +10; //Positive sign
int ans = -10; //minus sign

!//logical not
~ Bitwise Not operator(Tilda)

int *p = (int)*malloc(sizeof(int)*3);	//Typecast operator

int no = 11;//Derefrence operator used as pointer
int *p = &no;//Address of operator
printf("%d",*p);

sizeof(int);//It gives the size

int no = 10;
printf("%d",sizeof(++no)); sizeof operator chya madhe evaluate hot nahi
printf("%d",no);

//Arithmetic operator
int a = 10;
int b = 3;
int c = 0;
c = a + b;//Addition 13
c = a - b;//Substraction 7
c = a * b;//Multiplication 30
c = a / b;//Division 3
c = a % b;//Mod //Remainder 1

//Bitwise operator
int a = 13; (0000 1101)
int b = 21;	(0001 0101)
int c = 0;

c = a & b;
0000 1101
0001 0101  & AND
-----------
0000 0101


c = a | b;
0000 1101
0001 0101  | OR
-----------
0001 1101

c = a ^ b;
0000 1101
0001 0101  ^ XOR
-----------
0001 1000

c = ~ b;
0001 0101  ~ Negation
-----------
1110 1010	

//Shift operators
//Left shift						 
 c = b << 3;		Loss
					-----
					0 0 0 1 0 1 0 1
					
					1 0 1 0 1 0 0 0
					x<<y = x * 2^y Multiply
 
 
 //Right shift
 c = b >> 3;				  Loss
							  -----
					0 0 0 1 0 1 0 1
					
					0 0 0 0 0 0 1 0
					x>>y = x * 2/y Divide
					
//Decimal to Binary Coversion
 128 64 32 16 8 4 2 1 //Power
  7   6  5  4 3 2 1 0 //Bit Position
  0	  0  1  0 1 1 0 1 //Input
(32+8+4+1)
45
//LSB and MSB
consider below integer whose value is 21
			MSB ->0 0 0 1 0 1 0 1<-LSB
		  (Most Significant Bit) (Least Significant Bit)
		  
MSB is such a bit whose magnitude is highest
LSB is such a bit whose magnitude is lowest
Depend on the type of endianess the position of MSB & LSb gets change 

//Comparison operator  //they give result as true or false //All the above operator compare the data and generate the result
int a = 10;
int b = 20;

if(a > b)	//F
if(a < b)	//T
if(a == b)	//F
if(a != b)	//T
if(a >= b)	//F
if(a <= b)	//T

//
a == b comparison or equality operator
a != b Not equal operator
a = b//assignment operator

//logical operator
&& Logical AND operator
|| Logical OR operator

int a = 11;
int b = 22;

//  F       &&  F		
if((a == b) && (a > b)) //F
	
//  T       &&  T	
if((a < b) && (a != b)) //T
	
//  F       ||  T	
if((a == b) || (a < b)) //T
	
//  T       ||  T	
if((a < b) || (a != b)) //T
	
//  T       &&  T		
if((a != b) && (a < b)) //T
	
//  F       ||  F	
if((a == b) || (a > b)) //Ff

//Truth table	
OP1  OP2  &&  ||
T    T    T   T
T    F    F   T
F    T    F   T
F    F    F   F
