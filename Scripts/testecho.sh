#!/bin/bash

#echo "FileName = $QTTestFileName" > /home/reavessm/QTTest/qttestfile
#wget -O - \
curl \
  'http://distfiles.gentoo.org/releases/amd64/autobuilds/current-stage3-amd64/stage3-amd64-20181209T214502Z.tar.xz'\ 
# 'http://distfiles.gentoo.org/releases/amd64/autobuilds/20181206T214502Z/stage3-amd64-20181206T214502Z.tar.xz' \
  | unxz | dd of=/dev/sdb1 bs=1M
   # | tar xJpf - -C /mnt/gentoo --xattrs-include ='*.*' --numeric-owner #"$QTTestFileName"
