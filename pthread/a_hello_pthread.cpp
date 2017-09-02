#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS  7

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello thread #%ld!\n", tid);
   // pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
      printf("In main: creating thread %ld\n", t);
      // thread: An opaque, unique identifier for the new thread returned by the subroutine.
      // attr: An opaque attribute object that may be used to set thread attributes. 
      //       You can specify a thread attributes object, or NULL for the default values.
      // start_routine: the C routine that the thread will execute once it is created.
      // arg: A single argument that may be passed to start_routine. It must be passed by 
      //      reference as a pointer cast of type void. NULL may be used if no argument is to be passed.
      rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         return -1;
      }
   }

   /* Last thing that main() should do */
   pthread_exit(NULL);
}