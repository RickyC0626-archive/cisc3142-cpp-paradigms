#ifndef MYSTRING_EXCEPTION
#define MYSTRING_EXCEPTION

#include <string>

namespace mystring
{
    class string_Exception
    {
        public:
            string_Exception(string what) : what(what) {}
            string getWhat() { return what; }
        private:
            string what;
    };
}

#endif