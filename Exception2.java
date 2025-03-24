import java.util.*;

class Exception2
{
    public static void main(String arg[])
    {
        int ans = 0, no1 = 0, no2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the first number : ");
        no1 = sobj.nextInt();

        System.out.println("Please enter the second number : ");
        no2 = sobj.nextInt();
        try
        {
            ans = no1 / no2;    //Exception prone code
        }
        catch(ArithmeticException obj)  //Exception alyavar handle karnya sathi
        {
            System.out.println("Exception occured as : "+obj);        
        }
        finally
        {
            sobj.close();   //Resource deallocation
        }
        System.out.println("Division is : "+ans);
        
    }
}

/*
try
{
    //Exception prone code 
}
catch(ArithmeticEXception obj)  //Specific catch
{}
catch(ArrayIndexedOutOfBoundsException obj) //Specific catch
{}
catch(Exception obj)    //Generic catch It should be at the end
{}
*/