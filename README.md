# File_man_with_bin
### При запуске бинарника стирается всё с экрана, выполняется код бинарника, затем ожидание 1с и продолжается работа файлового менеджера 
Звапуск: 
```
gcc summator.c -o summator
gcc file_man.c -fPIC -c
gcc -shared file_man.o -o libfileman.so
gcc main.c libfileman.so -lncurses -o main -Wl,-rpath,.
./main 
```
