set out "plotKenn.png"
set terminal png
set title "Bipolartransistor Verstärkungskennlinien"
set xlabel "Schritte à 0.25 V"
set ylabel "I in mA"
set grid
plot "data1.txt" using :1 title "1V" with lines,\
    "data2.txt" using :1 title "2V" with lines,\
    "data3.txt" using :1 title "3V" with lines,\
    "data4.txt" using :1 title "4V" with lines
