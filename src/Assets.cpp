#include "Assets.hpp"

Assets::Assets(SoftwareSerial& s)
{
    this->debug_serial = &s;
}

void Assets::init( void )
{
    this->debug_serial->begin(115200); // Launch SoftwareSerial for debugger.log
}

void Assets::log(const char *fmt, ...)
{
    if (is_debug) {
        va_list ap;
        char buffer[256];

        va_start(ap, fmt);
            vsprintf(buffer, fmt, ap);
        va_end(ap);

        this->debug_serial->print(buffer);
    }
}