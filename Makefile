#Targetname : Dependent target names
#<TAB>command

Build :
    gcc functions.c test_add_integers.c Unity/unity.c -IUnity

Run:
    ./a.out
	