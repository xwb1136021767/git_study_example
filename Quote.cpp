//
// Created by Lenovo on 2022/3/23.
//

#include "Quote.h"

double Bulk_quote::net_price(std::size_t n) const {
    if(n >= min_qty){
        return n*(1-discount)*price;
    }else{
        return n*price;
    }
}
