#include <iostream>
#include <string>
#include <vector>
#include "kart.h"
#include "bike.h"
#include "monsterTruck.h"
using namespace std;

int main() {
    MonsterTruck monsterTruck("bowser");

    monsterTruck.displayStats();
    monsterTruck.specialMove();

    return 0;
}
