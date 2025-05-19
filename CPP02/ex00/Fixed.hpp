#ifndef FIXID_HPP
#define FIXID_HPP

#include <string>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& rhs);
        ~Fixed();

        int     getRawBits(void) const;
        void    setrawBits(int const raw);

    private:
        int _fixedPointValue;

};
#endif