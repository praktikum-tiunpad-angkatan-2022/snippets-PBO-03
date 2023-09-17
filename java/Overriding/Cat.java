package Overriding;

class Cat extends Animal {
    @Override
    public void walk() {
        super.walk();
        System.out.println("This cute " + getClass().getSimpleName() + " walks!");
    }
}