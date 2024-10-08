// import java.lang.*;
class ND extends Thread {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("child thread " + i);
        }
    }
}

public class Thread_main{
    public static void main(String[] args) {
        ND obj = new ND();
        obj.start();
        for (int i = 0; i < 10; i++) {
            System.out.println("Main thread " + i);
        }
    }
}