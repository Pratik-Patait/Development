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
class PratikListener implements WindowListener
{
    public void windowDeactivated(WindowEvent obj){}
    public void windowActivated(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void windowOpened(WindowEvent obj){}
}
class FrameDemo3
{
    public static void main(String Arg[])
    {
        System.out.println("Print the data on console");

        PratikFrame pobj = new PratikFrame("PMP");

       
    }
}