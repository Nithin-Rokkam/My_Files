abstract class Shape{
    abstract void numberOfSides();
}

class Trapezoid extends Shape{
    
    void numberOfSides() {
        System.out.println("Number of sides in a trapezoid are 4");
    }
    
}

class Triangle extends Shape{

    void numberOfSides(){
        System.out.println("Number of sides in a triangle are 3");

    }
}

class Hexagon extends Shape{

    void numberOfSides(){
        System.out.println("Number of sides in a hexagon are 6");
    }
}

class AbstractExapmle {
    public static void main(String[] args){
        Shape obj=new Trapezoid();
        obj.numberOfSides();
        obj=new Triangle();
        obj.numberOfSides();
        obj=new Hexagon();
        obj.numberOfSides();
    }
}