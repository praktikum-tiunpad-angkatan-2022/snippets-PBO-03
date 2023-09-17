class Animal:
   def __init__(self, name) -> None:
        self._name = name
   def walk(self) -> None:
       print(self._name + " walks!")