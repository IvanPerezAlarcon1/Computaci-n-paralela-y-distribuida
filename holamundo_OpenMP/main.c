#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char **argv)
#pragma omp parallel
{
    {
        fprintf(stdout,"Hola mundo desde Hilo %d y %d\n", omp_get_thread_num(),omp_get_num_threads());
    }
    return EXIT_SUCCESS;
}
