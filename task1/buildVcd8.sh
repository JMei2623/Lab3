rm -rf obj_dir
rm -f lsfr8.vcd

verilator -Wall --cc --trace lsfr8.sv --exe lsfr8_tb.cpp # build obj_dir

make -j -C obj_dir/ -f Vlsfr8.mk Vlsfr7 # build c++ project

obj_dir/Vlsfr8 # build vcd file

# source ./buildVcd8.sh
