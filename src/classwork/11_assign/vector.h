//
//TODO 7 add template
#ifndef My_VECTOR_H
#define MY_VECTOR_H
class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor
	size_t Size() const { return size; }
	//void set_size(size_t sz) { size = sz; }
	int& operator[] (int i) { return nums[i]; }
	int& operator[] (int i)const { return nums[i]; }
private:
	size_t size;
	int* nums;


};


#endif 