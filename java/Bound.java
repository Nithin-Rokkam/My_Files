import java.util.*;
import java.util.ArrayList;
class Animal{
    public void eat(){
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal{
    public void eat(){
        System.out.println("Dog is eating");
    }
}

class Rat extends Animal{
    public void eat(){
        System.out.println("Rat is eating");
    }
}

class Cat extends Animal{
    public void eat(){
        System.out.println("Cat is eating");
    }
}
public class Bound {
    public static void feedAnimals(List<? extends Animal>animals) {
        for(Animal animal:animals){
            animal.eat();
        }
    }
    public static void main(String[] args) {
        List<Dog> dogs=new ArrayList<>();
        dogs.add(new Dog());

        List<Cat> cats=new ArrayList<>();
        cats.add(new Cat());
        
    }
}
