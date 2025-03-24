import java.io.*;

class Input3
{
    public static void main(String a[])throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter string");
        String str = bobj.readLine();

        System.out.println("Enter integer");
        int no = Integer.parseInt(bobj.readLine());
       
        System.out.println("Enter float");
        float f = Float.parseFloat(bobj.readLine());
        
        System.out.println("Enter double");
        double d = Double.parseDouble(bobj.readLine());

        System.out.println("Enterered string is : "+str);
        System.out.println("Enterered integer is : "+no);
        System.out.println("Enterered float is : "+f);
        System.out.println("Enterered double is : "+d);
        


    }
}