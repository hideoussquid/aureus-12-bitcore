
Debian
====================
This directory contains files used to package aureusd/aureus-qt
for Debian-based Linux systems. If you compile aureusd/aureus-qt yourself, there are some useful files here.

## aureus: URI support ##


aureus-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install aureus-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your aureus-qt binary to `/usr/bin`
and the `../../share/pixmaps/aureus128.png` to `/usr/share/pixmaps`

aureus-qt.protocol (KDE)

