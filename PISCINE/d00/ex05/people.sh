
ldapsearch "uid=z*" cn 2>/dev/null |grep 'cn:*' | cut -c 5- | tail -n+2 | sort -r -f

