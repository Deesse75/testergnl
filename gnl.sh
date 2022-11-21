#!/bin/bash
echo ""
echo "|------------------Partie obligatoire------------------|"
echo ""
G="../get_next_line.c"
GH="../get_next_line.h"
GU="../get_next_line_utils.c"
if [ -f $G ];then
	echo "Nom fichier : get_next_line.c  .................... OK"
else
	echo "Nom fichier : get_next_line.c ................... FAIL"
fi
if [ $(grep "char	*get_next_line(int fd)" $G | wc -l) -eq 0 ];then
	echo "Prototype ......................................... OK"
else
	echo "Prototype ....................................... FAIL"
fi
if [ -f $GH ];then
	echo "Nom fichier : get_next_line.h  .................... OK"
else
	echo "Nom fichier : get_next_line.h ................... FAIL"
fi
if [ -f $GU ];then
	echo "Nom fichier : get_next_line_utils.c  .............. OK"
else
	echo "Nom fichier : get_next_line_utils.c ............. FAIL"
fi


echo ""
echo "Test Valgrind  :"
echo "|--------------------------|"
echo ""
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 $G $GU main.c
valgrind -q --leak-check=full --show-leak-kinds=all ./a.out 7 > valg
rm -f valg
echo "|--------------------------|"
echo "Si vide : Valgrind OK"
echo ""


rm -f norminette.txt
norminette ../get_next_line/ > norminette.txt
if [ $(grep "Error!" norminette.txt | wc -l) -eq 0 ];then
	echo "Norminette ......................................... OK"
else
	echo "Norminette ....................................... FAIL"
fi


rm -f difference.txt
rm -f diff.txt
echo "Partie OBLIGATOIRE...........|" >> diff.txt
echo "" >> diff.txt

i=0
while [ $i -lt 16 ]
do
	echo ""
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 $G $GU main.c
	./a.out $i > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 tester.c tester_utils.c tester_main.c
	./a.out $i > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "Fichier $i ..... BUFFER SIZE 0 ..................... OK"
	else
		echo "Fichier $i ..... BUFFER SIZE 0 ....................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 $G $GU main.c
	./a.out $i > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 tester.c tester_utils.c tester_main.c
	./a.out $i > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "Fichier $i ..... BUFFER SIZE 1 ..................... OK"
	else
		echo "Fichier $i ..... BUFFER SIZE 1 ....................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 $G $GU main.c
	./a.out $i > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 tester.c tester_utils.c tester_main.c
	./a.out $i > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "Fichier $i ..... BUFFER SIZE 42 .................... OK"
	else
		echo "Fichier $i ..... BUFFER SIZE 42 ...................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 $G $GU main.c
	./a.out $i > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 tester.c tester_utils.c tester_main.c
	./a.out $i > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "Fichier $i ..... BUFFER SIZE 10 000 000 ............ OK"
	else
		echo "Fichier $i ..... BUFFER SIZE 10 000 000 ...........FAIL"
	fi
	rm -f difference.txt
	((i++))
done
echo ""
echo ""
echo "|---------------------Partie bonus---------------------|"
echo ""

Gb="../get_next_line_bonus.c"
GHb="../get_next_line_bonus.h"
GUb="../get_next_line_utils_bonus.c"
if [ -f $Gb ];then
	if [ -f $Gb ];then
		echo "Nom fichier : get_next_line_bonus.c  .............. OK"
	else
		echo "Nom fichier : get_next_line_bonus.c ............. FAIL"
	fi
	if [ $(grep "char	*get_next_line(int fd)" $Gb | wc -l) -eq 0 ];then
		echo "Prototype ......................................... OK"
	else
		echo "Prototype ....................................... FAIL"
	fi
	if [ -f $GHb ];then
		echo "Nom fichier : get_next_line_bonus.h  .............. OK"
	else
		echo "Nom fichier : get_next_line_bonus.h ............. FAIL"
	fi
	if [ -f $GUb ];then
		echo "Nom fichier : get_next_line_utils_bonus.c  ........ OK"
	else
		echo "Nom fichier : get_next_line_utils_bonus.c ....... FAIL"
	fi

	echo ""
	echo "Test Valgrind  :"
	echo "|--------------------------|"
	echo ""
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 $G $GU main_bonus.c
	valgrind -q --leak-check=full --show-leak-kinds=all ./a.out 7 > valg
	rm -f valg
	echo "|--------------------------|"
	echo "Si vide : Valgrind OK"
	echo ""


	echo "Partie BONUS.................|" >> diff.txt
	echo "" >> diff.txt
	echo ""
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 $Gb $GUb main_bonus.c
	./a.out 14 9 7 2 3 8 10 1 11 > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=0 tester_bonus.c tester_utils_bonus.c tester_bonus_main.c
	./a.out 14 9 7 2 3 8 10 1 11 > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "BUFFER SIZE 0 ...................................... OK"
	else
		echo "BUFFER SIZE 0 .....................................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 $Gb $GUb main_bonus.c
	./a.out 14 9 7 2 3 8 10 1 11 > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 tester_bonus.c tester_utils_bonus.c tester_bonus_main.c
	./a.out 14 9 7 2 3 8 10 1 11 > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "BUFFER SIZE 1 ...................................... OK"
	else
		echo "BUFFER SIZE 1 .....................................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 $Gb $GUb main_bonus.c
	./a.out 14 9 7 2 3 8 10 1 11 > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 tester_bonus.c tester_utils_bonus.c tester_bonus_main.c
	./a.out 14 9 7 2 3 8 10 1 11 > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "BUFFER SIZE 42 ..................................... OK"
	else
		echo "BUFFER SIZE 42 ....................................FAIL"
	fi
	rm -f difference.txt

	cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 $Gb $GUb main_bonus.c
	./a.out 14 9 7 2 3 8 10 1 11 > rendu
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=10000000 tester_bonus.c tester_utils_bonus.c tester_bonus_main.c
	./a.out 14 9 7 2 3 8 10 1 11 > attendu

	diff rendu attendu > difference.txt
	cat difference.txt >> diff.txt

	if [ $(cat difference.txt | wc -w) -eq 0 ];then
		echo "BUFFER SIZE 10000000 ............................... OK"
	else
		echo "BUFFER SIZE 10000000 ..............................FAIL"
	fi
else
	echo "Pas de fichier get_next_line_bonus"
fi
echo ""
rm -fr difference.txt attendu rendu test1 test2 main* tester*  gnl* ./a.out 
rm -fr 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
