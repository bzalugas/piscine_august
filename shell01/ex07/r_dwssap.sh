cat /etc/passwd | sed '/^#/ d' | sed -n 'n;p' | rev | cut -d / -f 1 | sed -n '7, 15 p' | tr ' ' ',' | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev
