from Animal import Animal
from Cat import Cat

def main() -> None:
    animal = Animal("animal")
    animal.walk()
    felis = Cat("cat")
    felis.walk()

if __name__ == "__main__":
    main()