#ifndef COMMODOREEMULATOR64_RAM_H
#define COMMODOREEMULATOR64_RAM_H

typedef unsigned char byte;

template <int sizeram>
class RAM
{
	public:
	byte& operator[](const int& i) { return m_memory[i]; }
	private:
	byte m_memory[sizeram];
};


#endif /*COMMODOREEMULATOR64_RAM_H*/