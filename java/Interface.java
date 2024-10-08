import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class Interface implements ActionListener{
JFrame f1;
JButton b1;
JTextField tf;
JLabel l1;
JLabel l2;
JLabel l3;
Interface(){
f1=new JFrame("K22SA");
l1=new JLabel("Login Screen");
l2=new JLabel("Username:");
l3=new JLabel("Password:");
b1=new JButton("Click");
tf=new JTextField("");

f1.add(b1);
f1.add(tf);
f1.add(l1);
f1.setLayout(new FlowLayout());
b1.setBounds(100,300,150,180);
b1.addActionListener(this);


	
f1.setSize(600,400);
f1.setVisible(true);
}
public void actionPerformed(ActionEvent e){
tf.setText("Welcome");
}

public static void main(String[] args){
// Interface obj=new Interface();
}
}



