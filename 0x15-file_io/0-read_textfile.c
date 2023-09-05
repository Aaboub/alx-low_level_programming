#include "main.h"

/**
 * read_textfile - entry
 * @filename: param
 * @letters: param
 *
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	unsigned int cnt = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((c = fgetc(fp)) != EOF && cnt < letters)
	{
		printf("%c", c);
		cnt++;
	}
	fclose(fp);
	return (cnt);
}
