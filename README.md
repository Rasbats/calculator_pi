# calculator_pi README

Building is documented in INSTALL.md

The plugin uses a continous integration setup described in the
[wiki](https://github.com/Rasbats/managed_plugins/wiki/Alternative-Workflow)
This setup is also able to push all updated metadata files to a clone
of https://github.com/OpenCPN/plugins in order to simplify pull requests
against this site.


## Copyright and licensing

This software is Copyright (c) Mike Rossiter 2017-2024. It is distributed
under the terms of the Gnu Public License version 3 or, at your option,
any later version. See the file COPYING for details.

Icons made by Freepik(http://www.freepik.com) from
Flaticon(https://www.flaticon.com/) and is licensed using Creative Commons
BY 3.0 (http://creativecommons.org/licenses/by/3.0/)

The documentation in the directory manual is distributed using a
CC BY-SA 4.0 license.

The software contains open-source licensed files under different licenses
including Expat, Apache-2  and Libpng. See the source files for details.

=========================================================
Version 4.1.0
=============
Updated for wxWidgets 3.2.2.1
New enc/pub files made.

Version 4.0.0
=============
Updated for wxWidgets 3.2.1.
Added PKG_NAME to Plugin.cmake.

Version 3.0.0
=============

Version 2.1
===========
Preparation for internationalisation.
Added dialog for converting degrees (dd.dddddd to dd.mm and dd.mm.sss).

Version 2.0
===========
This version for OpenCPN v5.
Now compiles on Windows and Linux.
Changes
For ease of maintenance the Functions button has been removed from the toolbar. Still available from the Calculator dialog.
Uses SVG icons for the Toolbar.

Version 1.8
===========
Testing for cross-compiling.

Version 1.7
===========
This version compiles using VS2013. Formatting using thousands is bypassed. Simple formatting of answers only.
Compiles standalone, copy opencpn.lib and maybe muparser32.lib and link these in.


Changes to version 1.6
=======================================
Added Willson Fetch Equation
Added wind speed to Beaufort equation
Changed to MuParser math interface
Added History pulldown box, improved history box behaviour
Added reporting modes (1000 separator, SI prefixes, accuracy)
Added function button in OpenCPN toolbar, with option to switch off from plugin settings
Minor tweaks and fixes

Calculator Plugin for OpenCPN by SaltyPaws aka Walbert Schulpen
=======================================

This is a light weight yet powerful calculator plugin for OpenCPN. Would you like to know your hull speed?

Key features are:
* Storing results in variables
* Shows historic calculations
* Full complement of nautical functions
* Screen footprint can be optimised & minimised as required

Adding formulas is easy. If your favorite nautical equation is missing, please let me know your equation via flyspray, and I will add it.

Help
=========
Type help in the calculator to get these instructions.

Examples of expression that work in the calculator are: (comments are in brackets, some results depend on other example calculations):
=========
Hull speed:
    LWL=48          (water line lenght in feet)
    vhull=1.34*LWL^(1/2)    (hull speed in knots)

Conversions:
    ftm=0.3048          (feet to meters)
    km_to_nm=0.539957       (Kilometers to nautical Mile)
    ftm*LWL         (waterline length in meters)

Distance to horizon
    R=6378.1*1000       (Radius of the earth in m)
    H=2.5           (Height of the eye above sea-level in m)
    d = R * acos(R/(R + h)) (Distance to horizon in m)
    ans*km_to_nm        (Distance to horizon in nm)

Distance to lighthouse
    H1=200          (height of lighthouse in m)
    d1 = R*acos(R/(R + H1)) (Distance to horizon in m)
    distance=d1+d       (visibility range of lighthouse in m)

Built-in functions

The following table gives an overview of the functions supported by the default implementation. It lists the function names, the number of arguments and a brief description.
Name    Argc.   Explanation
sin     1   sine function
cos     1   cosine function
tan     1   tangens function
asin    1   arcus sine function
acos    1   arcus cosine function
atan    1   arcus tangens function
sinh    1   hyperbolic sine function
cosh    1   hyperbolic cosine
tanh    1   hyperbolic tangens function
asinh   1   hyperbolic arcus sine function
acosh   1   hyperbolic arcus tangens function
atanh   1   hyperbolic arcur tangens function
log2    1   logarithm to the base 2
log10   1   logarithm to the base 10
log     1   logarithm to the base 10
ln  1   logarithm to base e (2.71828...)
exp     1   e raised to the power of x
sqrt    1   square root of a value
sign    1   sign function -1 if x<0; 1 if x>0
rint    1   round to nearest integer
abs     1   absolute value
min     var.    min of all arguments
max     var.    max of all arguments
sum     var.    sum of all arguments
avg     var.    mean value of all arguments


Built-in binary operators

The following table lists the default binary operators supported by the parser.
Operator    Meaning     Priority
=       assignement             -1
&&      logical and             1
||      logical or          2
<=      less or equal           4
>=      greater or equal        4
!=      not equal           4
==      equal               4
>       greater than            4
<       less than           4
+       addition            5
-       subtraction             5
*       multiplication          6
/       division            6
^       raise x to the power of y   7
*The assignment operator is special since it changes one of its arguments and can only by applied to variables.
Other operators

muParser has built in support for the if then else operator. It uses lazy evaluation in order to make sure only the necessary branch of the expression is evaluated.
Operator    Meaning     Remarks
?:  if then else operator   C++ style syntax

Variables:
    pi, e
    ans is the result of the previous calulation
    dtr is the conversion factor from degrees to radians
    you can define your own variables (e.g. myvariable=10/8*cos(dtr*90) or yourvariable=ans)
    clear removes results in the history, but leaves your defined variables in tact

User Interface - type these commands in the command window:
    history - Toggle the history panel
    showhelp - Show/Hide the Help button
    showcalculate - Show/Hide the Calculate button
    showhistory - Show/Hide the history toggle
    help - show the help menu

Settings/Plugins/Preferences:
    Show/Hide Calculate, Help and History toggle buttons
    History Settings: max Results -this is the number of results that will be stored in the history pulldown. The history pulldown will contain five times this value
    Log to opencpn: Enable/Disable logging of results to opencpn logfile.

Other:
    Error handling supported
    MuParser has been compiled with C++ Double for internal precision.

License
=======
The plugin is licensed under the terms of GPL v2 or, at your will, later.
The MuParser files are by Ingo Berg and is open source. For full licence, please see the muparser source files.
