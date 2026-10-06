#include "monsterTruck.h"

MonsterTruck::MonsterTruck(const string& driver)
        : m_driver(driver), 
          m_maxSpeed(140),
          m_weight(120.0),
          m_fuel(100) {}

void MonsterTruck::displayStats() {
    cout << "Driver: " << m_driver << endl;
    cout << "Max Speed: " << m_maxSpeed << " km/h" << endl;
    cout << "Weight: " << m_weight << " kg" << "\n\n";
}

void MonsterTruck::useFuel(int amount) {
    if (m_fuel >= amount) {
        m_fuel -= amount;
        cout << m_driver << " used " << amount << 
        "% fuel. Remaining fuel: " << m_fuel << "%" << "\n\n";
    } else {
        cout << m_driver << " is out of fuel!" << endl;
    }
}

void MonsterTruck::specialMove() {
    cout << m_driver << " crushes through obstacles effortlessly!" << "\n";
    useFuel(15);  // Uses 15% fuel for the special move
}
