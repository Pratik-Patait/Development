import java.lang.*;

final class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
}
class Derived 
{
	public Base bobj = new Base();	//Composition
	public void gun()
	{
		System.out.println("Derived gun");
	}
}
class Final4
{
	public static void main(String arr[])
	{
		Derived dobj = new Derived();
		dobj.bobj.fun();
		dobj.gun();
	}
}
/*
java.langfinal class System
{
	public static printStream out = new PrintStream();
}

class PrintStream
{
	public void println(Strting str)
	{
		
	}
}
System.out.println("Hello...");
*/