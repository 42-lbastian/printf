make -C ../

echo "Test Vrac(v) - Leaks(l) - Flags(f) - Tout(t)"
read rep

if [ $rep = 'f' ] || [ $rep = 't' ]
then
	gcc test_printf.c ../libftprintf.a -o b.out
	gcc test_ft_printf.c ../libftprintf.a -o c.out
	mkdir temp
	mkdir result

	rm -rf temp/*
	rm -rf result/*
	echo "start:"
	read start

	echo "end:"
	read end

	echo "pas:"
	read count_exp

	for (( i=$start; i<=$end; ((i=i+$count_exp))))
	do
		for (( j=$start; j<=$end; ((j=j+$count_exp))))
		do
			echo "i:$i-j:$j"
			./b.out $i $j > temp/pri_nr_$i-$j 2>&1
			./c.out $i $j > temp/pri_ft_$i-$j 2>&1
		done
	done

	for (( i=$start; i<=$end; ((i=i+$count_exp))))
	do
		for (( j=$start; j<=$end; ((j=j+$count_exp))))
		do
			echo "dif_pri_$i-$j"
			diff temp/pri_nr_$i-$j temp/pri_ft_$i-$j > result/dif_pri_$i-$j
		done
	done

	find ./result -empty -delete
	rm -rf b.out
	rm -rf c.out
fi

if [ $rep = 'v' ] || [ $rep = 't' ]
then

	if [ $rep != 't' ]
	then
		rm -rf temp/*
		rm -rf result/*
	fi
	gcc test_printf.c ../libftprintf.a -o b.out
	gcc test_ft_printf.c ../libftprintf.a -o c.out
	mkdir temp
	mkdir result


	./b.out 0 0 0 > temp/pri_nr_vrac 2>&1
	./c.out 0 0 0 > temp/pri_ft_vrac 2>&1

	diff --text temp/pri_nr_vrac temp/pri_ft_vrac > result/dif_pri_vrac

	rm -rf b.out
	rm -rf c.out
	find ./result -empty -delete

fi

if [ $rep = 'l' ] || [ $rep = 't' ]
then

	mkdir leaks

	gcc test_leaks.c ../libftprintf.a -o b.out

	./b.out 1 1
	grep -iR "leaks for" leaks/* > test1
	./b.out 0 0
	grep -iR "leaks for" leaks/* >> test1
	./b.out -1 -1
	grep -iR "leaks for" leaks/* >> test1
	./b.out 1234 1234
	grep -iR "leaks for" leaks/* >> test1
	./b.out 1234 -1234
	grep -iR "leaks for" leaks/* >> test1
	./b.out -1234 1234
	grep -iR "leaks for" leaks/* >> test1
	clear
	make -C ../ fclean
	rm -rf b.out
	rm -rf leaks
	cat test1
	rm -rf test1

fi

make -C ../ fclean
