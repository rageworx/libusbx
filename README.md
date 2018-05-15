libusbx MinGW-W64 forked
========================

 * libusbx author : JoshBlake
 * This project is a forked project from Josh Blake's repository(https://github.com/JoshBlake/libusbx ) and customized to build it for MinGW-W64 users.
 * Changes from JoshBlake's libusbx,
     - Removed android and mac supports.
     - Building with MinGW-W64 with M-SYS.

      ```
      Release: make -f Makefile.mingw
      Debug:   make -f Makefile.mingwdebug
	  ```

     - Library out : lib/libusbx(d).a
     - Installing is not recommended but it should be done with this.

      ```
      make -f Makefile.mingw install
      ```

     - Uninstalling

      ```
      make -f Makefile.mingw uninstall
      ```

### Original README

```
libusbx
=======

libusbx is a library for USB device access from Linux, Mac OS X,
Windows and OpenBSD/NetBSD userspace, with OpenBSD/NetBSD, and to a
lesser extent some of the newest features of Windows (such as libusbK
and libusb-win32 driver support) being EXPERIMENTAL.
It is written in C and licensed under the GNU Lesser General Public
License version 2.1 or, at your option, any later version (see COPYING).

libusbx is abstracted internally in such a way that it can hopefully
be ported to other operating systems. Please see the PORTING file
for more information.

libusbx homepage:
http://libusbx.org/

Developers will wish to consult the API documentation:
http://api.libusbx.org

Use the mailing list for questions, comments, etc:
http://mailing-list.libusbx.org

- Pete Batard <pete@akeo.ie>
- Hans de Goede <hdegoede@redhat.com>
- Xiaofan Chen <xiaofanc@gmail.com>
- Ludovic Rousseau <ludovic.rousseau@gmail.com>
- Nathan Hjelm <hjelmn@users.sourceforge.net>
(Please use the mailing list rather than mailing developers directly)
```
