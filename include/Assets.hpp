#ifndef ASSETS_H
#define ASSETS_H

/**
 * @file
 * @copyright  Copyright 2023 aiRCS Lab, Discover Beyond.
 * @author     Julien Geneste
 * @version    1.0
 * @date       June 2023
 *
 * @section LICENSE
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */

#include <SoftwareSerial.h>
#include <stdio.h>
#include <stdarg.h>

#define is_debug 1

/**
 * @brief Similar to printf(), ie. debug("valeur du int %d\n\r", (int)68);
 * Used if is_debug is set to 1
 * 
 * @param fmt is the formated string 
 * @param ... replacement value
 * 
 * @return void
*/

class Assets
{
private:
    SoftwareSerial* debug_serial;
public:
    Assets(SoftwareSerial&);
    void init( void );
    void log(const char *fmt, ...);

    /*
    * Maybe handle RTC communication here ...
    */
};


#endif