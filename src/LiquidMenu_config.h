/**
@file
Configuration file for LiquidMenu library.

Contains global constants the configure the size of some of the arrays
used in the library, also configures the debugging messages.
*/

#pragma once

#include "LiquidMenu_const.h"

// Select a "LiquidCrystal" library:
// ---------------------------------

/*!
 * @name Select a "LiquidCrystal" library
 * @{
 */

/*!
 * @name Arduino's parallel "LiquidCrystal" library
 * @{
 */
// #ifndef LIQUIDMENU_LIBRARY
//     #define LIQUIDMENU_LIBRARY LiquidCrystal_LIBRARY ///< wrapped library ID
// #endif
// #ifndef DisplayClass
//     #define DisplayClass LiquidCrystal ///< name of wrapped library's class
// #endif
//!@}

/*!
 * @name I2C library
 * @see https://github.com/johnrickman/LiquidCrystal_I2C
 * @{
 */
#ifndef LIQUIDMENU_LIBRARY
    #define LIQUIDMENU_LIBRARY LiquidCrystal_I2C_LIBRARY
#endif
#ifndef DisplayClass
    #define DisplayClass LiquidCrystal_I2C
#endif
// !@}

/*!
 * @name Some other library
 * @{
 */
// #include <LIBRARY_HEADER.h>
// #ifndef DisplayClass
// #define DisplayClass LIBRARY_CONSTRUCTOR
// #endif
//!@}
//!@}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


/// Configures the number of available variables per line.
const uint8_t MAX_VARIABLES = 2; ///< @note Default: 5

/// Configures the number of available functions per line.
const uint8_t MAX_FUNCTIONS = 1; ///< @note Default: 8

/// Configures the number of available lines per screen.
const uint8_t MAX_LINES = 4; ///< @note Default: 12

/// Configures the number of available screens per menu.
const uint8_t MAX_SCREENS = 1; ///< @note Default: 14

/// Configures the number of available menus per menus system.
const uint8_t MAX_MENUS = 2; ///< @note Default: 8

/*!
 * Enable/disable hiding the focus indicator.
 * 
 * When enabled the focus indicator will disappear for one step after
 * completing an iteration through the focusable lines. When disabled the focus
 * indicator will go from the last focusable line directly to the first
 * focusable line without disappearing (i.e. it will be always visible).
 */
#define LM_FOCUS_INDICATOR_GHOSTING false ///< @note Default: true

// Turns the debugging messages on or off.
#define LIQUIDMENU_DEBUG false ///< @note Default: false
