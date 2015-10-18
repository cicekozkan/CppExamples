#pragma once
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>

template<typename C, typename F>
void fc(C &c, size_t n, F f)
{
	std::generate_n(std::inserter(c, c.begin()), n, f);
}

template<typename C>
void display(const C &c)
{
	for (auto &r : c)
		std::cout << r << " ";
	std::cout << std::endl;

}

template<typename InIter>
void display(InIter beg, InIter end)
{
	while (beg != end)
		std::cout << *beg++ << " ";

	std::cout << "\n" << std::endl;
}

void randomize();

std::string rs();

std::ostream &sl(std::ostream &);