#include<string>
#include<iostream>
using namespace std;

class Bike {
    public:
        Bike(const string& driver);

        void displayStats();
        void specialMove();
        void leanTurn(int angle);

    private:
        string m_driver;
        int m_maxSpeed;
        float m_weight;

        int m_fuel;  // Private field to manage internal fuel consumption
        void useFuel(int amount);
};
