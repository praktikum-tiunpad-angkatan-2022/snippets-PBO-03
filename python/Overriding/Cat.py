from Animal import Animal

"""
There are two prerequisite conditions for Method overriding:
Inheritance should be present in the code, method overriding cannot be performed in the same class, 
and overriding can only be executed when a child class is derived through inheritance.
The child class should have the same name and the same number of parameters as the parent class.
"""
class Cat(Animal):
   def __init__(self, name) -> None:
        super().__init__(name)

   def walk(self) -> None:
       print("This cute " + self._name + " walks!")