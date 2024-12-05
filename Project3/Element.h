#pragma once
template <typename T>
class Element
{
public:
	Element<T>* next;
	T value;
	Element() { next = nullptr; value = T(); };
};
