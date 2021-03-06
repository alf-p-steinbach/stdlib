﻿// Source encoding: utf-8 with BOM ∩
//
// Define STDLIB_NO_ANSI_ESCAPES_FIX to not enable interpretation of escape codes.
// (Depending on the system they might still be interpreted, but in Windows stdlib
// won't then call SetConsoleMode to tell the console window to interpret them.)
//
// For documentation of the sequences supported by Windows 10 console windows, see
// the article titled “Console Virtual Terminal Sequences” in MSDN Library
// (Microsoft Developer Network Library), which was available at
// <url: https://msdn.microsoft.com/en-us/library/windows/desktop/mt638032(v=vs.85).aspx>
// at the time when I wrote this example program, medio June 2017.

#include <stdlib/all/basics.hpp>
using namespace std;

auto main() -> int
{
    const auto s =
        "\x1B[37mColored text is fun.\n"
        "Look, here’s some \x1B[91mred text\x1B[37m!\n"
        "And here’s some \x1B[92mgreen text\x1B[37m, amazing!";
    cout << s << endl;
}
