#ls -l gives you information about the permissions of the files and folders in the working directory
#its output is in the following format:
#-rw-r--r-- 1 user group 0 Jan 1 00:00 file.txt
#which means:
#first character: is it a file (-) or a directory (d)
#next 9 characters: permissions for the owner, group, and others
#next number: number of hard links (how many files point to this file, which means how many names does this file have)
#next two strings: owner and group
#next number: size of the file in bytes
#next date: date of last modification
#last string: name of the file

#permissions
#r: read
#w: write
#x: execute

#three types of permissions

#owner: user who created the file / first 3 characters
#group: group that the user belongs to / next 3 characters
#others: everyone else / last 3 characters

#you can change file permissions with chmod command
#in chmod command there is 3 digits
#first digit: permissions for the owner
#second digit: permissions for the group
#third digit: permissions for others

#each digit is a sum of the following numbers:
#4: read
#2: write
#1: execute

#so if you want to give read and write permissions to the owner, you should use 6 (4+2)
#and if you want to give read and execute permissions to the group, you should use 5 (4+1)
#and if you want to give read and execute permissions to others, you should use 5 (4+1)

#you can also use letters instead of digits
#u: user
#g: group
#o: others
#a: all

#so if you want to give read and write permissions to the owner, you should use chmod u+rw file.txt, if you want to
#give read and execute permissions to everyone you should use chmod a+rx file.txt or chmod +rx file.txt
