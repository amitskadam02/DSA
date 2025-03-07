SOLID: Robert Martin(Uncle Rob)
1. SOLID Principles
SOLID is a set of five design principles for writing maintainable and scalable software. 
These principles help in designing software that is easy to understand, modify, and extend.

1.1. S – Single Responsibility Principle (SRP)
A class should have only one reason to change.
Explanation: Each class should have only one job or responsibility. This makes the system easier to maintain and understand.
Example:
class ReportGenerator {
public:
    void generateReport() {
        // Code to generate report
    }
};
class ReportPrinter {
public:
    void printReport() {
        // Code to print the report
    }
};
Why? If both generating and printing the report were in the same class, any change in printing 
logic would also affect the report generation logic.

1.2. O – Open/Closed Principle (OCP)
Software entities (classes, modules, functions) should be open for extension but closed for modification.
Explanation: Instead of modifying existing code for new functionality, you should extend the existing code.
Example:
class Shape {
public:
    virtual double area() = 0;  // Abstract method
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};
Why? If we added a new shape, we wouldn't modify the Shape class; we would extend it.

1.3. L – Liskov Substitution Principle (LSP)
Subtypes must be substitutable for their base types.
Explanation: If class B is a subclass of A, we should be able to replace A with B without breaking the behavior of our program.
Example (Violating LSP):
class Bird {
public:
    virtual void fly() {}
};
class Penguin : public Bird {
public:
    void fly() override {
        throw std::logic_error("Penguins can't fly!");
    }
};
Fix: Remove the fly() function from Bird and use a different hierarchy.

1.4. I – Interface Segregation Principle (ISP)
Clients should not be forced to depend on interfaces they do not use.
Explanation: A class should not implement unnecessary methods that it doesn’t use.
Bad Example:
class Animal {
public:
    virtual void fly() = 0;
    virtual void swim() = 0;
};
class Fish : public Animal {
public:
    void fly() override {} // Unnecessary for Fish
    void swim() override {
        // Fish swimming logic
    }
};
Fix: Separate interfaces:
class Swimmer {
public:
    virtual void swim() = 0;
};
class Flyer {
public:
    virtual void fly() = 0;
};
class Fish : public Swimmer {
public:
    void swim() override {
        // Fish swimming logic
    }
};

1.5. D – Dependency Inversion Principle (DIP)
High-level modules should not depend on low-level modules. Both should depend on abstractions.
Example (Bad Design):
class LightBulb {
public:
    void turnOn() { /* Logic */ }
    void turnOff() { /* Logic */ }
};
class Switch {
private:
    LightBulb bulb;  // Direct dependency
public:
    void toggle() {
        bulb.turnOn();
    }
};
Fix: Introduce an abstraction
class ISwitchable {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class LightBulb : public ISwitchable {
public:
    void turnOn() override { /* Logic */ }
    void turnOff() override { /* Logic */ }
};

class Switch {
private:
    ISwitchable* device;
public:
    Switch(ISwitchable* d) : device(d) {}
    void toggle() { device->turnOn(); }
};

2. Singleton Design Pattern
Definition:
The Singleton pattern ensures that a class has only one instance and provides a global point of access to it.
Key Features of Singleton Pattern:
Private Constructor – Restricts object creation from outside.
Static Instance – Ensures only one instance.
Public Method (getInstance) – Provides global access.

3.UML

// move
A(int val){
	data= new int (val);
}
A(A&& other){
	data = other.data
}

// copy