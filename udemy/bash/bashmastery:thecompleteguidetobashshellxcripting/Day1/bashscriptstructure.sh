##core components of a bash script
# 1. Shebang line (#!) - tells the shell which interpreter to use //hashbang line #!/bin/bash
# left blank line under the shebang line
# 2. Commands - what you want to do
# 3: Exit status - 0 for success, 1 for failure // optional

# to run a bash script, you need to make it executable
# chmod +x bashscriptstructure.sh
# ./bashscriptstructure.sh

#-----------------------------------------------#

#!/bin/bash

# Author: Rıdvan Akman
# Date Created: 2021-10-02
# Last Modified: 2021-10-02

# Description
# This script will print out my name and the date this script was created

# Usage
# bash bashscriptstructure.sh

echo "Hello, my name is Rıdvan Akman"