#ifndef TASK1
#define TASK1
template <typename T, int n> T minArr(T (&ar)[n])
{
	T min = ar[0];
	for (int i = 1; i < (sizeof(ar) / sizeof(T)); i++)
		if (ar[i] < min)
			min = ar[i];

	return min;
}
#endif