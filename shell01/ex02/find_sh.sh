find . -type f -name "*.sh" -print | rev | cut -d '/' -f 1 | cut -d '.' -f 2 | rev
