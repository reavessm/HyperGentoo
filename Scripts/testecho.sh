#!/bin/bash

#TMP="`mktemp`"
#echo "FileName = $QTTestFileName" > /home/reavessm/QTTest/qttestfile
#wget -O - \
#curl "http://distfiles.gentoo.org/releases/amd64/autobuilds/current-stage3-amd64/stage3-amd64-20181209T214502Z.tar.xz" | tar xJpf - --xattrs-include='*.*' --numeric-owner -O | dd of=/dev/sdb iflag=fullblock
curl "http://distfiles.gentoo.org/releases/amd64/autobuilds/20181209T214502Z/install-amd64-minimal-20181209T214502Z.iso" | dd of=/dev/sdb iflag=fullblock

#rm $TMP
