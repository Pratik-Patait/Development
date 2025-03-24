import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class PratikFrame
{
    public Frame fobj;
    public PratikFrame(String name)
    {
        fobj = new Frame(name);
        fobj.setSize(600,600);
        fobj.setVisible(true);
        fobj.addWindowListener(new PratikListener());
        //fobj.addActionListener(new PratikListener());
    }
}
class PratikListener extends WindowAdapter                      //implements WindowListener
{
 
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    
}
class FrameDemo4
{
    public static void main(String Arg[])
    {
        System.out.println("Print the data on console");

        PratikFrame pobj = new PratikFrame("PMP");

       
    }
}