import java.lang.*;

class Array1
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        int arr[] = new int [5];
        
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;

        System.out.println("Size of array is : "+arr.length);   //length is the property for array in java
        System.out.println("Elements of array are : "); //'arr' gives hashcode of that array
        System.out.println("Data by for loop");
        for(iCnt = 0; iCnt<arr.length; iCnt++)
        {
            System.out.println(arr[iCnt]);
        }

        System.out.println("Data by while loop");
        iCnt = 0;
        while(iCnt<arr.length)
        {
            System.out.println(arr[iCnt]);
            iCnt++;
        }
        //Aalshi vala for each loop no conditon no counter required to specify, does by itself
        System.out.println("Data by for each loop");
        for(int no : arr)
        {
            System.out.println(no);
        }
    }
}