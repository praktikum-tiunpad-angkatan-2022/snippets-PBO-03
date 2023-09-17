package Inheritance;
public class Main {
    public static void main(String[] args) {
        Cat catus = new Cat();
        System.out.println(catus.getLegCount()); // 4
        catus.setLegCount(8);
        System.out.println(catus.getLegCount()); // 8
    }
}