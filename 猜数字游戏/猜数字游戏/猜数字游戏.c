#include<stdio.h>
int main()
{
	int rand, N, i, guess, count;
	count = 1;
	scanf("%d %d", &rand, &N);
	for (count; count <= N; ++count)
	{
		scanf("%d", &guess);
		if (guess < 0)
		{
			printf("Game Over\n");
			return 0;
		}
		if (guess > rand)
			printf("Too big\n");
		else if (guess < rand)
			printf("Too small\n");
		if (guess == rand)
		{
			if (count == 1)
				printf("Bingo!\n");
			else if (count <= 3 && count >= 1)
				printf("Lucky You!\n");
			else if (count > 3 && count <= N)
				printf("Good Guess!\n");
			break;
		}
	}
	if (count > N)
	{
		printf("Game Over\n");
		return 0;
	}

	return 0;
}