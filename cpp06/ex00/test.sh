#!/bin/bash

function do_test()
{
  GR='\033[0;32m'
  NC='\033[0m'
  CASE=$1
  printf "${GR}./convert $CASE${NC}\n"
  ./convert $CASE
  echo
}

NORMAL_CASES="
-42
0
42.0
42.42
42.42f
42ft
"

OVERFLOW_CASES="
128
2147483648
"

ETC_CASES="
nan
+nan
-nan
nanf
inf
-inf
inff
-inff
"

ALL_IMPOSSIBLE_CASES="
impossible
"

CASES="$NORMAL_CASES $OVERFLOW_CASES $ETC_CASES $ALL_IMPOSSIBLE_CASES"

make
for CASE in $CASES
do
  do_test $CASE
done
make fclean