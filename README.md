dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.

PS
----
This is my personal fork of dmenu, which includes lot of patches which serve to
make it easier to use or more versatile. 

The list of patches include:

| Implemented | Patch/functionality            |
| ----------- | ------------------------------ |
| ✓           | Border                         |
| ✓           | Line height                    |
| ✓           | Mouse support                  |
| ✓           | Symbols                        |
| ✓           | Vertical full width            |
| ✓           | Fuzzy match                    |
| ✓           | Highlight                      |
| ✓           | Numbers (current match count)  |
| ✓           | Width, x and y positions       |
