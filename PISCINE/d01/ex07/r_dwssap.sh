cat /etc/passwd | grep -v "^#" | awk 'NR % 2 == 0' | sed 's/:.*//' | rev | sort -r | tail -n +$FT_LINE1 | head $((-$FT_LINE2 + $FT_LINE1 -1)) | tr '\n' ',' | sed 's/,/, /g' | sed 's/.\{2\}$/./' | tr -d '\n'
