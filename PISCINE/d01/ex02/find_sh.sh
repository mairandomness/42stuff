find . -name "*.sh" | xargs -n 1 basename | sed 's/.\{3\}$//' 

