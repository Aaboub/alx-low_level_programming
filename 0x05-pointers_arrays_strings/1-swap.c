/**
 * swap_int - Entry
 *
 * @a: param
 * @b: param
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
