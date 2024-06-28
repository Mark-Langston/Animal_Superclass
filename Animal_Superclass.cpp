#include <iostream>
#include <string>

// Superclass
class Animal {
private:
    std::string sound;
public:
    Animal(const std::string& snd) : sound(snd) {}
    std::string speak() const {
        return sound;
    }
    virtual std::string move() const = 0; // Pure virtual function
};

// Animal feline subclass
class Feline : public Animal {
private:
    std::string movement;
public:
    Feline(const std::string& snd, const std::string& mov) : Animal(snd), movement(mov) {}
    std::string move() const override {
        return movement;
    }
};

// Animal canine subclass
class Canine : public Animal {
private:
    std::string movement;
public:
    Canine(const std::string& snd, const std::string& mov) : Animal(snd), movement(mov) {}
    std::string move() const override {
        return movement;
    }
};

int main() {
    // Program intro
    std::cout << "Animal Characteristics\n" << "\n";

    Feline mainCoon("Purr", "Stalk");
    Canine chihuahua("Woof Woof", "Bites Ankle");

    std::cout << "The Main-Coon Characteristics: " << mainCoon.speak() << ", " << mainCoon.move() << "\n";
    std::cout << "The Chihuahua Characteristics: " << chihuahua.speak() << ", " << chihuahua.move() << "\n";

    return 0;
}