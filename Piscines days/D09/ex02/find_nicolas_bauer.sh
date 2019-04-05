#!/bin/bash
cat $1 | grep -i ^'nicolas.*bauer\|bauer.*nicolas' |tail -2 | rev | awk '{print $2}' |rev
