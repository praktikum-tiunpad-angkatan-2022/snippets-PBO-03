from Cat import Cat

def main() -> None:
    felis = Cat()
    print(f"Felis has {felis.getLegCount()} legs")
    felis.setLegCount(felis.getLegCount() - 1)
    print(f"Ouch, felis now has {felis.getLegCount()} legs")

if __name__ == "__main__":
    main()