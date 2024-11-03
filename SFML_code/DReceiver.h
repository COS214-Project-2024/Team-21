// DReceiver.h
#ifndef D_RECEIVER_H
#define D_RECEIVER_H

#include "Tile.h"
#include "Map.h"
#include <vector>

class DReceiver {

public:
    DReceiver();
    void distribute(Map* map, std::vector<int>& shuffledTiles, double& populationPool, double& employmentPool, 
              double& popTotal, double birthRate, double deathRate, double population, double taxRate);
    double distributePool(double& pool, Tile* tile, double rate);
};

#endif // D_RECEIVER_H
