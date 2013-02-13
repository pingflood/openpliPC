#!/bin/bash

DO_BACKUP=0
DO_RESTORE=0
DO_XINE=1
DO_CONFIGURE=1
DO_PARALLEL=1
DO_MAKEINSTALL="--install"


if [ "$(id -u)" != "0" ]; then
	echo "Error: Permission denied. Must be root user to run $0"
	exit 1
fi

echo "Starting at $(date)"
timestart=$(date +"%s")


#To build enigma2 on Ubuntu 10.xx and 11.xx (32/64bit) 
#Install these packages:
#

echo "-----------------------------------------"
echo "*** INSTALL REQUIRED PACKAGES ***"
echo "-----------------------------------------"
REQPKG="autoconf automake build-essential debhelper gettext subversion mercurial git autopoint \
	libdvdnav-dev libfreetype6-dev libfribidi-dev \
	libgif-dev libjpeg62-dev libpng12-dev \
	libsdl1.2-dev libsigc++-1.2-dev \
	libtool libxml2-dev libxslt1-dev python-dev swig libssl-dev libssl0.9.8 \
	libvdpau-dev vdpau-va-driver \
	libcdio-dev libvcdinfo-dev \
	libavcodec-dev libpostproc-dev libnl2-dev \
	python-setuptools \
	checkinstall \
	"

for p in $REQPKG; do
	echo -n ">>> Checking \"$p\" : "
	dpkg -s $p >/dev/null
	if [ "$?" -eq "0" ]; then
		echo "package is installed, skip it"
	else
		echo "package NOT present, installing it"
		apt-get -y install $p
	fi
done


mkdir -p ./deb/

cd libs

if [ "$DO_XINE" -eq "1" ]; then
	# Build and install xine-lib:
	PKG="xine-lib"

	cd $PKG

	if [ "$DO_CONFIGURE" -eq "1" ]; then
		echo "-----------------------------------------"
		echo "configuring OpenPliPC $PKG"
		echo "-----------------------------------------"

		./autogen.sh --disable-xinerama --disable-musepack --prefix=/usr
	fi


	echo "--------------------------------------"
	echo "build OpenPliPC $PKG, please wait..."
	echo "--------------------------------------"

#	checkinstall --default --install --pakdir=../../deb --maintainer=dc --pkgversion=$(date +%Y%m%d)-build-git --nodoc make -j"$DO_PARALLEL" install

	checkinstall \
		--default $DO_MAKEINSTALL \
		--pakdir=../../deb \
		--maintainer=pingflood \
		--pkgversion=$(date +%Y%m%d) \
		--pkgrelease=pingflood-git \
		--nodoc \
		--include=include.list \
		make -j"$DO_PARALLEL" install

	if [ ! $? -eq 0 ]; then
		echo ""
		echo "An error occured while building xine-lib"
		exit
	fi

	cd ..
fi


#Build and install libdvbsi++:
PKG="libdvbsi++"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
git clone git://git.opendreambox.org/git/obi/$PKG.git
cd $PKG
dpkg-buildpackage -uc -us
cd ..
mv $PKG*.deb ../deb/
dpkg -i ../deb/$PKG*.deb

#Build and install libxmlccwrap:
PKG="libxmlccwrap"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
git clone git://git.opendreambox.org/git/obi/$PKG.git
cd $PKG
dpkg-buildpackage -uc -us
cd ..
mv $PKG*.deb ../deb/
dpkg -i ../deb/$PKG*.deb

#Build and install libdreamdvd:
PKG="libdreamdvd"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
git clone git://schwerkraft.elitedvb.net/libdreamdvd/$PKG.git
cd $PKG
dpkg-buildpackage -uc -us
cd ..
mv $PKG*.deb ../deb/
dpkg -i ../deb/$PKG*.deb

#Build and install libdvbcsa:
PKG="libdvbcsa"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
svn co svn://svn.videolan.org/$PKG/trunk $PKG
cd $PKG
autoreconf -i
./configure --prefix=/usr --enable-sse2
make
#make install
#sudo checkinstall --nodoc make install
#checkinstall --default --install --pakdir=../../deb --maintainer=dc --pkgversion=$(date +%Y%m%d)-build-git --nodoc make install

checkinstall \
	--default $DO_MAKEINSTALL \
	--pakdir=../../deb \
	--maintainer=pingflood \
	--pkgversion=$(date +%Y%m%d) \
	--pkgrelease=pingflood-git \
	--nodoc \
	--include=include.list \
	make -j"$DO_PARALLEL" install




#mv $PKG*.deb ../../deb/
cd ..
#dpkg -i ../deb/$PKG*.deb



#Build and install libbluray:
PKG="libbluray"
LIB_BLURAY_REF="6d88105783fa3a83963178d31f624717334ca9e0"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
git clone git://git.videolan.org/libbluray.git
cd $PKG
git checkout $LIB_BLURAY_REF
autoreconf -vif
./configure --prefix=/usr
make
#sudo make install
#sudo checkinstall --nodoc make install
#checkinstall --default --install --pakdir=../../deb --maintainer=dc --pkgversion=$(date +%Y%m%d)-build-git --nodoc make install

checkinstall \
	--default $DO_MAKEINSTALL \
	--pakdir=../../deb \
	--maintainer=pingflood \
	--pkgversion=$(date +%Y%m%d) \
	--pkgrelease=pingflood-git \
	--nodoc \
	--include=include.list \
	make -j"$DO_PARALLEL" install


#mv $PKG*.deb ../../deb/
cd ..
#dpkg -i ../deb/$PKG*.deb

#Build and install pythonwifi:
PKG="pythonwifi"
echo "-----------------------------------------"
echo "Build and install $PKG"
echo "-----------------------------------------"
if [ -d $PKG ]; then
	echo "Erasing older build dir"
	rm -Rf $PKG
	rm -f $PKG*
fi
git clone git://git.berlios.de/$PKG
cd $PKG
python setup.py install
cd ..

#Build dvbsoftwareca kernel module:
#cd dvbsoftwareca
#make   # You must have installed dvb-core (for example from s2-liplianin).
#insmod dvbsoftwareca.ko  # It will create ca0 device for adapter0

cd ..

timeend=$(date +"%s")
timedelta=$(($timeend-$timestart))

echo "Finished at $(date) ($(date -u -d @"$timedelta" +"%-Mm %-Ss"))"
