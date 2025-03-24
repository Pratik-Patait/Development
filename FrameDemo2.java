import java.lang.*;
import java.awt.*;
class PratikFrame
{
    public Frame fobj;
    public PratikFrame(String name)
    {
        fobj = new Frame(name);
        fobj.setSize(600,600);
        fobj.setVisible(true);
    }
}
class FrameDemo2
{
    public static void main(String Arg[])
    {
        System.out.println("Print the data on console");

        PratikFrame pobj = new PratikFrame("PMP");

       
    }
}