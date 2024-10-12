/**
 * @file Asset.h
 * @author John Korreck
 *
 *
 */
 
#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset {
private:
 std::string mTicker;
 u_int8_t mPrice = 0;
 size_t mQuantity = 0;
public:
 /// Getter for price
 u_int8_t getPrice() const { return mPrice; }
 /// Setter for price
 void setPrice (u_int8_t newPrice) { mPrice = newPrice; }
 /// Getter for quantity
 size_t getQuantity() const { return mQuantity; }
 /// Setter for quantity
 void setQuantity(size_t newQuantity) { mQuantity = newQuantity; }

};



#endif //ASSET_H
