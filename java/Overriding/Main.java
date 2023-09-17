package Overriding;

public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.walk();
        Cat felis = new Cat();
        felis.walk();
    }
}
