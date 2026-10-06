#include "bike.h"

Bike::Bike(const string& driver)
        : m_driver(driver), 
          m_maxSpeed(160),
          m_weight(50.0),
          m_fuel(100) {}

void Bike::displayStats() {
    cout << "Driver: " << m_driver << endl;
    cout << "Max Speed: " << m_maxSpeed << " km/h" << endl;
    cout << "Weight: " << m_weight << " kg" << "\n\n";
}

void Bike::useFuel(int amount) {
    if (m_fuel >= amount) {
        m_fuel -= amount;
        cout << m_driver << " used " << amount << 
        "% fuel. Remaining fuel: " << m_fuel << "%" << "\n\n";
    } else {
        cout << m_driver << " is out of fuel!" << endl;
    }
}

void Bike::specialMove() {
    cout << m_driver << " performs a Wheelie for extra speed!" << endl;
    useFuel(5);  // Uses 5% fuel for the special move
}

// Since bikes can tilt when turning, this function can allow the 
// player to lean into turns at a specific angle, affecting handling and speed.
void Bike::leanTurn(int angle) {
    cout << m_driver << " leans in at an angle of " << angle << endl;
}