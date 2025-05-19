#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(int const n);
        Fixed(float const f);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& rhs);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

        int toInt(void) const;
        float toFloat(void) const;
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif