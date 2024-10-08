import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Swing implements ActionListener {
    JFrame f1;
    JButton b1;
    JTextField tf;

    Swing() {
        f1 = new JFrame("Class SA");
        b1 = new JButton("Click here");
        tf = new JTextField("Welcome");

        f1.setLayout(new FlowLayout()); // set layout for frame
        f1.add(b1);
        f1.add(tf);

        b1.addActionListener(this);

        f1.setSize(400, 500);
        f1.setVisible(true); // make the frame visible
    }

    public void actionPerformed(ActionEvent e) {
        tf.setText("Nithin");
    }

    public static void main(String[] args) {
    }
}