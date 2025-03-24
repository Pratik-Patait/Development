import java.lang.*;
abstract class Demo
{
	public  int i,j;
	public Demo()
	{
		System.out.println("Demo constructor");
	}
	public void fun()	//concrete
	{
		System.out.println("Demo fun");
	}
	public abstract void gun();	//Abstract	virtual void gun() = 0;
}
class Hello extends Demo{
	public int x,y;
	public Hello()
	{
		System.out.println("Hello constructor");
	}
	public void sun()	//concrete
	{
		System.out.println("Hello sun");
	}
	public void gun()	//concrete
	{
		System.out.println("Hello gun");
	}
	
}
class AbstractDemo1
{
	public static void main(String a[])
	{
		Demo dobj;
	  //dobj = new Demo();	//Not Allowed
		
		Hello hobj = new Hello();
		hobj.fun();
		hobj.gun();
		hobj.sun();
	}
}






/*
java programming language
Features of java
Jvm architecture
Toolchain of java
First application of ajva
Datatypes in java
Sizeof data types
Class design
Encapsualtion
constructors nad its types
object creation in javaMethod and data access using. operator
Inheritance in java
types of inheritance
use of super keyword
polymorphism
compile time as fucntion overloading
runtime poymorphism as overriding
Runtime method dispatch
static characterstics
static method
static block
final charachtestics
final behaviuor
final classaccess specifier
abstract class 
abstract method
*/