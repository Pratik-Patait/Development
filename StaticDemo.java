import java.lang.*;

class Demo
{
	public int i;
	public int j;
	public static int k;
	
	static
	{
		System.out.println("Inside  static block");
		k = 11;	
	}
	
	public Demo()
	{
		System.out.println("Inside Constructor");
		this.i = 0;
		this.j = 0;
	}
	public void fun()	//Non static method can  access static as well as Non static characterstics
	{
		System.out.println("Inside non static fun");
		System.out.println(this.i);
		System.out.println(this.j);
		System.out.println(this.k);
	}
	public static void gun()	//static method can only access static characterstics
	{
		System.out.println("Inside static gun");
		System.out.println(k);
	}
}
class StaticDemo
{
	public static void main(String a[])
	{
		Demo.gun();	//object create hoychya adhich class chya navane apan static method call karu shakto
		
		
		
		Demo obj;
		obj = new Demo();
		/*obj.fun();
		
		System.out.println(obj.i);
		System.out.println(obj.j);*/
	}
	
		
	
}