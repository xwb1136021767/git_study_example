//
// Created by Lenovo on 2022/3/23.
//

#ifndef C__PRIMER_STUDY_QUOTE_H
#define C__PRIMER_STUDY_QUOTE_H

#include <iostream>
class Quote {
public:
    Quote()= default;
    Quote(std::string book,double sales_price):bookNo(book),price(sales_price){}

    std::string isbn(){return bookNo;}
    virtual double net_price(std::size_t n) const {
        return n*price;
    }

    virtual ~Quote()= default;

private:
    std::string bookNo;
protected:
    double price=0.0;

};

class Bulk_quote : public Quote{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
public:
    Bulk_quote() = default;
    Bulk_quote(std::string book,double price,std::size_t m_qty,double dis)
                :Quote(book,price),min_qty(m_qty),discount(dis){

    }
    double net_price(std::size_t n) const override ;
};



#endif //C__PRIMER_STUDY_QUOTE_H
