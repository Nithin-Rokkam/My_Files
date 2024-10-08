import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

// Main class to display the JFrame and handle mouse events
public class Proj07Runner {
    private JFrame frame;
    private MyPanel panel;

    // Constructor to initialize JFrame and JPanel
    public Proj07Runner() {
        // Create JFrame with title and size
        frame = new JFrame("Mouse Coordinate Display");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 100);

        // Create JPanel to display mouse coordinates
        panel = new MyPanel();
        // Add mouse listener to JPanel to handle mouse clicks
        panel.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                // Update mouse coordinates and repaint panel on mouse click
                panel.setMouseCoordinates(e.getX(), e.getY());
                panel.repaint();
            }
        });

        // Add JPanel to JFrame and make it visible
        frame.getContentPane().add(panel);
        frame.setVisible(true);
    }

    // Method to get the JFrame object
    public JFrame getJFrame() {
        return frame;
    }

    // Method to get the JPanel object
    public JPanel getJPanel() {
        return panel;
    }

    // Main method to execute the program
    public static void main(String[] args) {
        // Certification statement
        System.out.println("I certify that this program is my own work");
        System.out.println("and is not the work of others. I agree not");
        System.out.println("to share my solution with others.");

        // Print your name
        System.out.println("Print your name here");

        // Create Proj07Runner object to display JFrame and JPanel
        Proj07Runner theRunner = new Proj07Runner();
        JFrame theJFrame = theRunner.getJFrame();
        // Print JFrame dimensions and insets
        System.out.println("The JFrame width = " + theJFrame.getWidth());
        System.out.println("The JFrame height = " + theJFrame.getHeight());
        Insets JFrameInsets = theJFrame.getInsets();
        System.out.println("JFrame insets");
        System.out.println(JFrameInsets.top + ", " + JFrameInsets.left + ", " +
                JFrameInsets.right + ", " + JFrameInsets.bottom);

        JPanel theJPanel = theRunner.getJPanel();
        // Print JPanel dimensions and insets
        System.out.println("The JPanel width = " + theJPanel.getWidth());
        System.out.println("The JPanel height = " + theJPanel.getHeight());
        Insets JPanelInsets = theJPanel.getInsets();
        System.out.println("JPanel insets");
        System.out.println(JPanelInsets.top + ", " + JPanelInsets.left + ", " +
                JPanelInsets.right + ", " + JPanelInsets.bottom);
    }
}

// Custom JPanel class to display mouse coordinates
class MyPanel extends JPanel {
    private int mouseX = -1;
    private int mouseY = -1;

    // Method to set mouse coordinates
    public void setMouseCoordinates(int x, int y) {
        mouseX = x;
        mouseY = y;
    }

    // Method to paint JPanel and display mouse coordinates
    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.BLACK);
        // Draw mouse coordinates if valid
        if (mouseX != -1 && mouseY != -1) {
            g.drawString("(" + mouseX + ", " + mouseY + ")", mouseX, mouseY);
        }
    }
}
