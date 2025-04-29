// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

#include <string>

class Person {
private:
    std::string _name;
    float _energy;
    float _happiness;
    float _health;

    float Constraints (float attribute){
        if (attribute > 100)
            return attribute = 100;
        else if (attribute < 0)
            return attribute = 0;
        else
            return attribute;
    }

public:
    // Proper constructor using initializer list
    Person(const std::string& name, float energy, float happiness, float health)
        : _name(name), _energy(energy), _happiness(happiness), _health(health) {}

    // Getter methods
    std::string getName() const {
        return _name;
    }

    float GetEnergy() const {
        return _energy;
    }

    float GetHappiness() const {
        return _happiness;
    }

    float GetHealth() const {
        return _health;
    }

    void Eat(float calories){
        _energy += (calories * 7.0 / 200);
        _energy = Constraints(_energy);
    }

    void Play(float minutes){
        _happiness += minutes / 2.0;
        _happiness = Constraints(_happiness);
        _energy -= minutes / 3.0;
        _energy = Constraints(_energy);
    }

    void Sleep(float hours){
        _energy += hours * 3.75;
        _energy = Constraints(_energy);
        _health += hours * 2.5;
        _health = Constraints(_health);
    }
};


int main(){
    // Example 1
    std::string name = "Alice";
    float energy = 150;
    float happiness = 22;
    float health = 100;

    float calories = 3000;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}