cat /etc/passwd | sed '/^#/ d' | sed -n 'n;p' | rev | cut -d '/' -f 1 | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev
