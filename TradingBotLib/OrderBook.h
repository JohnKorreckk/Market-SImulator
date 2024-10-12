#pragma once
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

class OrderBook {
    private:
        int mCost = 20;

    public:
        int getmCost() { return mCost; }
        OrderBook();
};