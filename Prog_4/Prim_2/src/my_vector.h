#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>

template<typename T>
class Vector{
    unsigned int v_maxsize;
    unsigned int v_size;
    T* v_ptr;

    public:  
    Vector(): v_size(0), v_ptr(0), v_maxsize(0){}

    Vector(unsigned int s): v_size(s), v_ptr(new T[s]), v_maxsize(s){
        for (int i = 0; i < v_size; i++)
        {
            v_ptr[i] = 0;
        }
        
    }
    
    ~Vector() {delete [] v_ptr;}

    T& operator[](int n);
    Vector& operator=(const Vector & v);
    unsigned int size() const { return v_size; }
	unsigned int maxsize() const { return v_maxsize; }
    void reserve(int alloc_size);
	void resize(int resize_size);
	void push_back(const T& d);
	void pop_back();
	void print();

};

template<class T>
void Vector<T>::reserve(int alloc_size) {
	if(alloc_size <= v_maxsize) return;
	T *p = new T[alloc_size];
	for(int i = 0; i < v_size; ++i) p[i] = v_ptr[i];
	delete[] v_ptr;
	v_ptr = p;
	v_maxsize = alloc_size;
}

template<class T>
T& Vector<T>::operator[](int n) {
	return v_ptr[n];
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T> & v) {
	if(this == &v) return *this;

	if(v.v_size <= v_maxsize) {
		for(int i = 0; i < v.v_size; i++) 
			v_ptr[i] = v.v_ptr[i];
		v_size = v.v_size;
		return *this;
	}

	T *p = new T[v.v_size];
	for(int i = 0; i < v.v_size; ++i) 
		p[i] = v.v_ptr[i];
	delete[] v_ptr;
	v_maxsize = v_size = v.v_size;
	v_ptr = p;
	return *this;
}

template<class T>
void Vector<T>::resize(int resize_size) {
	reserve(resize_size);
	for(int i = 0; i < resize_size; ++i) v_ptr[i] = 0;
	v_size = resize_size;
}

template<class T>
void Vector<T>::push_back(const T& d){
	if(v_maxsize == 0) 
		reserve(10);
	else if(v_size == v_maxsize) 
		reserve(2*v_maxsize);
	v_ptr[v_size] = d;
	v_size++;
}

template<class T>
void Vector<T>::pop_back(){
	if(v_size!=0)
	 v_size--;
	else{
		std::cerr << "Memory exceded!";
		return;
	}
}

template<class T>
void Vector<T>::print(){
	for(int i = 0; i < size(); ++i) {
		std::cout << v_ptr[i] << " " ;      
	}
	std::cout << std::endl;
}

#endif