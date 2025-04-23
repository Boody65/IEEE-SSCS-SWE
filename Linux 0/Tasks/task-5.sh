  270  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/numbers.txt
  271  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/all_in_one.c
  272  gcc all_in_one.c -o main
  273  sudo apt install gcc
  274  gcc all_in_one.c -o main
  275  ./main 0> numbers.txt 1>output.txt 2>error.txt
  276  history > task-5.sh
