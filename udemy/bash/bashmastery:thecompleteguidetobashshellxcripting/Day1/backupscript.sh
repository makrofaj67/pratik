#!/bin/bash

#Author: Rıdvan Akman
#Date Created: 18.11.2023
#Last Modified: 18.11.2023
#Description: This script backup files in given directory and save it in a .tar archive
#Usage:
#sh backupscript.sh -h to print usage / backupscipt.sh -directoryyouwanttobackup / or / sh backupscritpt.sh (this will backup the contents in that you run script)

#read option

#if [ "$1" == "-h" ]; then
#    echo "selected"
#fi

##bash scriptte if içinde [] arasında boşlukların önemi var.
if [ "$1" == "" ]; then
    echo "With this script you can backup your files"
    echo "To see how to use the script you can use it with "-h""
fi

if [ "$1" == "-h" ]; then
    echo -e
    echo "-h      print this message"
    echo "-c      backup current directory"
    echo "-o      backup other directory"
    echo "-d      directory to you want to backup"
    echo "-bd     specify directory you want to backup"
    echo -e
    echo "To backup current directory just type this:"
    echo "       sh backupscript.sh -c -bd [DIRECTORYTOSAVEYOURBACKUP]"
    echo "To backup specific directory use like this:"
    echo "       sh backupscript.sh -o -d [DIRECTORYTOBACKUP] -bd [DIRECTORYTOSAVEYOURBACKUP]"
    echo -e
fi

if [ "$1" == "-c" ]; then
    find . | grep -v "backupscript.sh" | xargs -I fn cp fn $3
fi

#| ve > arasındaki fark | bu sembol çıktıyı terminale yazdırırken > sadece çıktıyı diğer komuta gönderir, terminale yazdırmaz
#xargs ise pipe edilen bilgideki satırları xargs dan sonra gelen komutun argümanları olarak sunarm

## find outputu satır satır oluyor
## find'dan grepe pipe yapınca, outputta sadece grep outputu görüyoruz
## grep -v ile bu satırı içermeyen satırları buluyoruz
## grep satırların anatomisini değiştirmiyor sadece satırda arama yapıyor
## xargs pipe'ından sonra da outputta sadece xargs outputunu görüyoruz, yani outputta sadece pipe sonundaki
## komutun outputunu görüyoruz
## xargs -I ile inputun uygulayacağımız komuttan sonra hangi sırada olabileceğini seçiyoruz
## xargs -I dan sonra gelen ilk kelime bizim grep pipe'ından gelen satırları depolar
## daha sonra komutu gireriz, komuttan sonra istediğimiz yere grep pipe'ından gelen şeyleri yerleştirebiliriz
## eğer -I kullanmazsak bu xargs'tan sonra yazdığın şeylerin ardına pipelanan şeyleri ekler, yani tek bir komut kullanmış olursun

if [ "$1" == "-o" ]; then
    find $PwD . | xargs -I dir cp dir $5
fi
