#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

namespace mystring
{
    class string
    {
        /**
         * Stream extraction operator
         */
        friend std::ostream &operator <<(std::ostream &os, const string &s);
        
        /**
         * Binary arithmetic operator
         */
        friend string operator +(const string &s1, const string &s2);

        private:
            char *cs;

        public:
            /**
             * Default constructor
             */
            string(const char *cs="");

            /**
             * Copy constructor
             */
            string(const string &s);

            /**
             * Destructor
             */
            ~string();

            /**
             * Copy assignment operator
             */
            string &operator =(const string &rhs);

            /**
             * Array subscript operator
             */ 
            char &operator [](int index);

            /**
             * Compound assignment operator
             */
            string &operator +=(const string &s);

            int length() const;

            void clear();
    };
}

#endif