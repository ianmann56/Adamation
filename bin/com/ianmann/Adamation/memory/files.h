#ifndef NEURON_FILE
#include "neuron.h"
#endif

/*
 * Reads the data in the file at _nrnpath and converts it into a Neuron.
 */
Neuron *readnrnfile(char *_nrnpath);

void setnrnheader(char header[]);

int matchnrnheader(char file[]);

/*
 * Stores a Neuron in it's file. This will overwrite any pre-existing data
 * in that file with the current data in _nrn.
 */
void storenrn(Neuron _nrn);

char *extendfile(char file[], int fsize, char toextend[], int tesize);