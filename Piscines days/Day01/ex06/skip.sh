ls -l | awk '{if (NR%2!=0) print }'
