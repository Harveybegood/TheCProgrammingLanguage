# TheCProgrammingLanguage
The C programming language written by Brian W. Kernighan and Dennis M. Ritchie.
I shall write programs for all exercises in this book and upload them to this repository.  

- a magic number is a direct usage of a number in the code, which conveys little information to someone who might have to read the program later, and they are hard to change in a systematic way.  
```c  
    void main(){
      int fahr;
      for(fahr = 0; fahr <= 100; fahr += 10){
          // 100, and 10 both are magic number
      }
    }
```

### Further understanding to the main function in C  
    Function main is a function like any other, it may return a value to its caller, which is in effect the environmentin in which  
    the program was executed. As a reminder that programs should return status to their environment.
