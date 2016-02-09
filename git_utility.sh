#!/bin/bash

# Comprobamos argumentos
if [ "$1" = "+" ]; then
	inc=-1
elif [ "$1" = "-" ]; then
	inc=1
else
	echo ERROR
	echo "USO: $0 [+|-]"
	echo -e "\t + : avanzar un commit"
	echo -e "\t - : retroceder un commit"
	exit -1
fi

max_commit=$(( $(git rev-list --count master) ))
current_commit=$(( $max_commit - $(git rev-list --count HEAD) ))
next_commit=$(( $current_commit + $inc ))


if [ $next_commit -eq 0 ]; then
	checkout="master"
elif [ $next_commit -lt 0 ]; then
	echo estás en el final
	exit 0;
elif [ $next_commit -ge $max_commit ]; then
	echo estás en el principio
	exit 0;
else
	checkout="master~$next_commit"
fi

function invert() {
	echo $(( $max_commit - $1 ))
}
if [ $inc -eq 1 ]; then
	echo "$(invert $next_commit) <- $(invert $current_commit)"
elif [ $inc -eq -1 ]; then
	echo "$(invert $current_commit) -> $(invert $next_commit)"
fi

echo
git checkout $checkout
