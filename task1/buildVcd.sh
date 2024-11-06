rm -rf obj_dir
rm -f lsfr4.vcd

verilator -Wall --cc --trace lsfr4.sv --exe lsfr4_tb.cpp # build obj_dir

make -j -C obj_dir/ -f Vlsfr4.mk Vlsfr4 # build c++ project

obj_dir/Vlsfr4 # build vcd file

# source ./buildVcd.sh
