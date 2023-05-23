set out "plot100.png"
set terminal png
set title "Spannung an Widerstand"
set xlabel "Ua in V"
set ylabel "Ue in V"
set grid
plot "data100.txt" using 1:2 title "" with lines
