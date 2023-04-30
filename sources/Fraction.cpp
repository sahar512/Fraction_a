// #include <iostream>
// #include <stdio.h>
// #include <math.h>
// #include <iomanip>
// #include <numeric>
// #include "Fraction.hpp"
// using namespace std; 
// namespace ariel{
//     Fraction::Fraction(int num, int den){
//         if (den ==0){
//             throw std::invalid_argument("denominator cannot be 0."); 
//         }
//         else if(num ==0){
//             this->num=0;
//             this->den=1;  

//         }
//         else{
//             this->num = num; 
//             this->den = den; 
//             this->reduse(); 
//         }
//     }
//     Fraction::Fraction(float num){
//         this->num =num*1000; 
//         this->den= 1000; 
//         this->reduse(); 

//     }
    //     void Fraction::setnum(int num){
    //         this->num=num; 

    //     }
    //     int Fraction::getnum(){
    //         return this->num; 
    //     }
    //     void Fraction::setden(int den){
    //         if(den ==0){
    //             throw std::invalid_argument("invalid denominator");
    //         }
    //         this->den=den; 
    //     }
    //     int Fraction::getden(){
    //         return this->den; 
    //     }
    //     //operator +
    //      const Fraction Fraction::operator+(const Fraction& other)const{
    //         int numerator = (this->num * other.den)+ (this->den * other.num); 
    //         int denominator = (this->den * other.den); 
    //         return Fraction(numerator, denominator); 

    //     }
    //      const Fraction Fraction::operator+(const float& num)const{
    //         return (*this)+ Fraction(num); 

    //     }
    //     const Fraction operator+(const float& num , const Fraction &f){
    //         return Fraction(num)+ f ; 
    //     }
    //     //operator-
    //     const Fraction Fraction::operator-(const Fraction& other)const{
    //         int numerator = (this->num * other.den) - (this->den * other.num); 
    //         int denominator = (this->den * other.den); 
    //         return Fraction(numerator, denominator); 

    //     }
    //      const Fraction Fraction::operator-(const float& num)const{
    //         return (*this) - Fraction(num); 

    //     }
    //     const Fraction operator-(const float& num , const Fraction &f){
    //         return Fraction(num) - f ; 
    //     }
    //     //operator *
    //     const Fraction Fraction::operator*(const Fraction& other)const{
    //         int numerator = (this->num * other.num) ; 
    //         int denominator = (this->den * other.den); 
    //         return Fraction(numerator, denominator); 

    //     }
    //      const Fraction Fraction::operator*(const float& num)const{
    //         return (*this) * Fraction(num); 

    //     }
    //     const Fraction operator*(const float& num , const Fraction &f){
    //         return Fraction(num) * f ; 
    //     }
    //     // /
    //     const Fraction Fraction::operator/(const Fraction& other)const{
    //         if(other.num == 0){
    //             throw invalid_argument("ERROR devide by 0"); 
    //         }
    //         int numerator = (this->num * other.den); 
    //         int denominator = (this->den * other.num);
    //         return Fraction(numerator, denominator); 
    //     }
    //     const Fraction Fraction::operator/(const float& num)const{
    //         if(num == 0){
    //          throw std::invalid_argument("ERROR devide by 0"); 
    //         }
    //         return (*this)/ Fraction(num); 
    //     }
    //     const Fraction operator/(const float& num , const Fraction &f ){
    //         if(f.num ==0){
    //             throw std::invalid_argument("ERROR devide by 0");
    //         }
    //         return Fraction(num) / f; 
    //     }
    //     bool Fraction::operator==(const Fraction& other)const{
    //         return (num== other.num && den==other.den); 
    //     }
    //     bool Fraction::operator<(const Fraction& other)const{
    //         return (num * other.den) < (other.num * den); 
    //     }
    //     bool Fraction::operator>(const Fraction& other)const{
    //         return (num * other.den) > (other.num * den); 
    //     }
    //     bool Fraction::operator<=(const Fraction& other)const{
    //         return !(*this > other); 
    //     }
    //     bool Fraction::operator>=(const Fraction& other)const{
    //         return !(*this < other); 
    //     }
    







        


 //}