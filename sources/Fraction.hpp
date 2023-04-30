#include <iostream>
#pragma once 
using namespace std; 
namespace ariel{
    class Fraction{
        private:
        int num; 
        int den; 

        public:
        int getnum()const{
            return this->num; 
        }
        int getden()const{
            return this->den; 
        }
        void setnum(int num){
            this->num=num; 
        } 
        void static setden(int den){
            if(den ==0){
                throw std::invalid_argument("invalid denominator");

            }
        }
        Fraction(); 
        Fraction(int num, int den): num(num),den(den){}; 
        Fraction(float num):num(0),den(1){};
        //+
        Fraction operator+(const Fraction& other)const{
            return *this;
        }; 
        // const Fraction operator+(const float& num)const{
        //     return *this;
        // }; 

        Fraction operator+(const float& num)const{
            return *this;
        }; 
        friend  Fraction operator+(const float& num , const Fraction &fun); 
        Fraction& operator ++(){
            return *this;
        }; 
        Fraction& operator++(int){
            return *this;
        }; 
        //-
        // 
        Fraction operator-(const Fraction& other)const{
            return *this;
        }; 
        // const Fraction operator-(const float& num)const{
        //     return *this;
        // }; 

        Fraction operator-(const float& num)const{
            return *this;
        }; 
        // friend const Fraction operator-(const float& num , const Fraction &fun){
        //     return num;
        // }; 

        friend Fraction operator-(const float& num , const Fraction &fun){
            return num;
        }; 
        Fraction& operator --(){
            return *this;
        }; 
        Fraction& operator--(int){
            return *this;
        }; 
        //*
        Fraction operator*(const Fraction& other)const{
            return *this;
        }; 
        Fraction operator*(const float& num)const{
            return *this;
        }; 
        friend Fraction operator*(const float& num , const Fraction &fun){
            return num;
        }; 
        // /
        Fraction operator/(const Fraction& other)const{
            return *this;
        }; 
        Fraction operator/(const float& num)const{
            return *this;
        }; 
        friend Fraction operator/(const float& num , const Fraction &fun){
            return num;
        };  
        //==
        bool operator==(const Fraction& other)const{
            return true;
        }; 
        bool operator==(float num){
            return true;
        };
        //<
        bool operator<(const Fraction& other)const{
            return true;
        }; 
        bool operator<(float num){
            return true;
        };
        //<=
        bool operator<=(const Fraction& other)const{
            return true;
        }; 
        bool operator<=(float num){
            return true;
        };
        //>
        bool operator>(const Fraction& other)const{
            return true;
        }; 
        bool operator>(float num){
            return true;
        };
        //>=
        bool operator>=(const Fraction& other)const{
            return true;
        }; 
        bool operator>=(float num){
            return true;
        };

        // bool operator>>(const Fraction& other)const{
        //     return true;
        // }; 
        // bool operator>>(float num){
        //     return true;
        // };
        friend std::ostream& operator<<(std::ostream& anum ,const Fraction& fun ){return anum;}

        // bool operator<<(const Fraction& other)const{
        //     return true;
        // }; 
        // bool operator<<(float num){
        //     return true;
        // };

        friend std::ostream& operator<<(std::ostream& anum, const Fraction& fun); 
        friend std::istream& operator>>(std::istream& istr, Fraction& fun); 
        void reduse(); 










    };
}