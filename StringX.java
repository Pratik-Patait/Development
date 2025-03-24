import java.io.*;

class StringX
{
    public static void main(String a[])
    {
        //String literal //String literal pool
        String str1 = "Hello";
        String str2 = "World";

        System.out.println(str1);
        System.out.println(str1.length());

        String str3 = str1 + str2;
        System.out.println(str3);//HelloWorld  
        String str4 = "Hello";  //String Literal madhe Data share hoto

        //String objects    //Heap
        String str5 = new String("Hello");  //String Object madhe new memory allocate hote same asel tari
        String str6 = new String("World");
        String str7 = new String("Hello");  //String Object madhe new memory allocate hote same asel tari 

        System.out.println(str4);
        System.out.println(str5);
        System.out.println(str6);
    }
}