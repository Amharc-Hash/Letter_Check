#include<stdio.h>
#include<string.h>
typedef struct {
	int a, b;
}Check;

Check letterCheck(char *str)
{
	Check l;
	int check = 5, Value = 3, i = 0;
	for (int j = 0; j < strlen(str); j++)
	{
		if ((str[j] < 'A' || str[j] > 'Z') && (str[j] < 'a' || str[j] > 'z'))
		{
			check = 4;
			Value = 0;
			break;
		}
		else
		{
			if (strlen(str) == 1)
			{
				if (str[0] >= 'A' && str[0] <= 'Z')
				{
					check = 0;
					Value = 1;
				}
				else if (str[0] >= 'a' && str[0] <= 'z')
				{
					check = 1;
					Value = 1;

				}
				else
				{
					check = 2;
					Value = 0;

				}
			}
			else
			{
				while (str[i] != '\0')
				{
					if (((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
						|| ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z')))
					{
						check = 2;
						Value = 1;

						break;
					}
					else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
					{
						check = 0;
						Value = 1;

					}
					else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					{
						check = 1;
						Value = 1;

					}
					i++;
				}
			}
		}
	}
	l.a = check;
	l.b = Value;
	return l;
}

int main()
{
	Check p{};
	char str[10000] ,*k;
	printf("Enter your string : ");
	gets_s(str);
	k = str;
	p = letterCheck(k);
	int check = p.a;
	int value = p.b;
	if (check == 0 && value == 1)
	{
		printf("ALL Capital Letter");
	}
	else if (check == 1 && value == 1)
	{
		printf("All Small Letter");
	}
	else if (check ==2 && value == 1)
	{
		printf("Mix");
	}
	else
	{
		printf("ERROR PLEASE TRY AGAIN");
	}

}

