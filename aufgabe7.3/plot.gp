set out "plotLed.png"
set terminal png
set title "Spannung an Widerstand"
set xlabel "Ue in V"
set ylabel "I in A"
set grid
plot "dataLed.txt" using 1:2 title "" with lines
