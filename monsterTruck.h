#include<string>
#include<iostream>
using namespace std;

class MonsterTruck {
    public:
        MonsterTruck(const string& driver);

        void displayStats();
        void specialMove();

    private:
        string m_driver;
        int m_maxSpeed;
        float m_weight;

        int m_fuel;  // Private field to manage internal fuel consumption
        void useFuel(int amount);
};