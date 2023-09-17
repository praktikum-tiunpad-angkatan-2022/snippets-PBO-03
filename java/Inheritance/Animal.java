package Inheritance;
public class Animal {
    private int legCount;

    public Animal() { this.legCount = 2; }

    public Animal(int legCount) {
        this.legCount = legCount;
    }

    protected void setLegCount(int legCount) {
        this.legCount = legCount;
    }

    protected int getLegCount() {
        return this.legCount;
    }
}