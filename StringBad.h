#ifndef STRINGBAD_H_INCLUDED
#define STRINGBAD_H_INCLUDED
#include <iostream>
class StringBad {
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    StringBad(const StringBad& st);
    ~StringBad();
    const StringBad& operator=(const StringBad & st);
    static int num_op();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};


#endif // STRINGBAD_H_INCLUDED
