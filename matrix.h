#ifndef _MATRIX_H_

#define _MATRIX_H_

class Matrix {
public:
	Synapse *_synapses;
	int _rows;
	int _columns;

	Matrix() {
		_synapses = NULL;
	}

	~Matrix() {
		if (NULL != _synapses) free(_synapses);
	}
	void copy(const Matrix &);
	void write(FILE *);
	void print(FILE *);
	void read(FILE *);
	void scan(FILE *);
};

#endif