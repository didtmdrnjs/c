#include<stdio.h>

void gotoxy_m(int x, int y);
void gotoxyt(float x, int y);
void gotoxy_s(int x, int y);
void color(unsigned short color);

extern int alphabet[26][5][5], rank[9][7][17], number[10][7][5], star[7][7];
extern char* music[10];

void page1()
{
	int i = 0, j = 21;
	gotoxy_s(111, 21);
	color(15);
	printf("Ű����");
	gotoxy_s(111, 22);
	printf("Ŀ����");
	gotoxy_s(111, 23);
	printf("����");
	gotoxy_s(108, 21);
	printf(">");
	gotoxy_s(119, 21);
	printf("<");
	gotoxyt(35, 20);
	printf("���� ����");
	gotoxyt(34.5, 21);
	printf("�÷��� ���");
	gotoxyt(36, 22);
	printf("�� ��");
	gotoxyt(33.5, 20);
	printf(">");
	gotoxyt(40.5, 20);
	printf("<");
	gotoxy_m(35, 43);
	printf("��� ����â������ ����Ű�� ����Ű�� �̵� �� �� �ֽ��ϴ�.");
}

void page10()
{
	gotoxy_m(26, 3);
	color(8);
	printf("���������������� ������������������������������������������������  ����  ����");
	gotoxy_m(26, 4);
	printf("���������������� ������������������������������������������������  ����  ����");
	gotoxy_m(26, 5);
	printf("  ����  ���� ����  ����  ���� ��������������  ����   �������� ����");
	gotoxy_m(26, 6);
	printf("  ����  ���� ����  ����  ���� �������� ��  ����   �������� ����");
	gotoxy_m(26, 7);
	printf("  ����  ����������  ����  �������������� ��������������������������������������");
	gotoxy_m(26, 8);
	printf("  ����  ����������  ����  �������������� ��������������������  ��������������");
	gotoxy_m(35, 10);
	printf("������   ����    ��������   ������   ");
	gotoxy_m(35, 11);
	printf("�� ��   ����  ��  ��   �� �� ��  ����������������������");
	gotoxy_m(35, 12);
	printf("�� ������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(35, 13);
	printf("����������������  �� ��  �� �� �� ��  �� ������������������");
	gotoxy_m(35, 14);
	printf("  ������     ��   ��  �� �� ��  ����������������������");
	gotoxy_m(35, 15);
	printf("  �� ��������    ��������   �� ��  ����������  ����������");
	gotoxy_m(35, 16);
	printf("  ������������           ������  ������������������������");
	gotoxy_m(35, 27);
	printf("����������������  ����������������  ������������");
	gotoxy_m(35, 28);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(35, 29);
	printf("�� �������� ��  �� �������� ��  �� ���� ��");
	gotoxy_m(35, 30);
	printf("��     ��  �� ������������  ������������");
	gotoxy_m(35, 31);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(35, 32);
	printf("�� �������� ��  �� ��       ������������");
	gotoxy_m(35, 33);
	printf("����������������  ������       ������������");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (star[i][j] == 1)
			{
				gotoxy_m(55 + j, 10 + i);
				printf("��");
			}
		}
	}
	int a = 52, b = 28;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" �� "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  "); b++;
	gotoxy_m(a, b);
	printf(" ��  ");
	a = 54, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("  �� "); b++;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("��   "); b++;
	gotoxy_m(a, b);
	printf("������ ");
	a = 56, b = 28;
	gotoxy_m(a, b);
	printf("������ "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("�� �� "); b++;
	gotoxy_m(a, b);
	printf("������ ");
	gotoxy_m(34, 43);
	color(15);
	printf("�뷡 ����ȭ�鿡���� ����Ű�� ����Ű�� ���� �� �� ������,");
	gotoxy_m(33, 44);
	printf("�뷡�� bpm�� ���̵��� �� �� �ִ�.(ǥ��� bpm�� �ٸ� �� ����)");
}

void page2()
{
	for (int i = 0; i < 94; i++)
	{
		for (int j = 3; j < 42; j++)
		{
			color(15);
			if (i == 35 || i == 56)
			{
				gotoxy_m(i, j);
				printf("|");
			}
			if (i > 35 && i < 56 && j == 38)
			{
				gotoxy_m(i, j);
				color(4);
				printf("��");
			}
		}
	}
	gotoxy_m(36, 20);
	printf("������");
	gotoxy_m(46, 30);
	printf("������");
	gotoxy_m(45, 5);
	printf("0");
	gotoxy_m(57, 5);
	printf("0000000");
	gotoxy_m(27, 43);
	printf("�������� ��Ʈ�� �������� ���� ������ Ű�� ������ ������ ������ ������ �޺��� �����ϴ�.");
}

void page3()
{
	for (int i = 0; i < 94; i++)
	{
		for (int j = 3; j < 42; j++)
		{
			color(15);
			if (i == 35 || i == 56)
			{
				gotoxy_m(i, j);
				printf("|");
			}
			if (i > 35 && i < 56 && j == 38)
			{
				gotoxy_m(i, j);
				color(4);
				printf("��");
			}
		}
	}
	gotoxy_m(36, 30);
	printf("������");
	gotoxy_m(45, 5);
	printf("1");
	gotoxy_m(57, 5);
	printf("0001365");
	gotoxy_m(44, 35); color(2); printf("perfect");
}

void page4()
{
	gotoxy_m(29, 5);
	color(15);
	printf("����������  ����������  ����������  ����������  ����������");
	gotoxy_m(29, 6);
	printf("����������  ����������  ����������  ����������  ����������");
	gotoxy_m(29, 7);
	printf("����������  ����     ���� ����  ����������  ����������");
	gotoxy_m(29, 8);
	printf("����������  ����     ���� ����  ���� ��  ����������");
	gotoxy_m(29, 9);
	printf("����������  ����������  ����������  ���� |��  ����������");
	gotoxy_m(29, 10);
	printf("����������  ����������  ����������  ���� ����  ����������");

	gotoxy_m(29, 15);
	printf("����������  ����������  ����  ����  ����������  ����������");
	gotoxy_m(29, 16);
	printf("����������  ����������  ����  ����  ����������  ����������");
	gotoxy_m(29, 17);
	printf("����     ���� ����  ������������  ����������  ���� ����");
	gotoxy_m(29, 18);
	printf("����     ���� ����  ������������  ��  ��  ���� ����");
	gotoxy_m(29, 19);
	printf("����     ���� ����  ������������  ����������  ���� ����");
	gotoxy_m(29, 20);
	printf("����������  ����������  ������������  ����������  ����������");
	gotoxy_m(29, 21);
	printf("����������  ����������  ����  ����  ����������  ����������");

	gotoxy_m(29, 25);
	printf("����������  ����������    ����    ��������   ����������");
	gotoxy_m(29, 26);
	printf("����������  ����������    ����    ������ ��  ����������");
	gotoxy_m(29, 27);
	printf("����������  ����������   ��������   ���� ����  ����������");
	gotoxy_m(29, 28);
	printf("����������  ���� ��   ��������   ���� ����  ����������");
	gotoxy_m(29, 29);
	printf("����������  ���� ����  �� ���� ��  ������ ��  ����������");
	gotoxy_m(29, 30);
	printf("����������  ���� ����  ������������  ��������   ����������");
	gotoxy_m(54, 5);
	printf("������������ ");
	gotoxy_m(54, 6);
	printf("��    �� ");
	gotoxy_m(54, 7);
	printf("��    �� ");
	gotoxy_m(54, 8);
	printf("��    �� ");
	gotoxy_m(54, 9);
	printf("��    �� ");
	gotoxy_m(54, 10);
	printf("������������ ");
	gotoxy_m(54, 15);
	printf("������������ ");
	gotoxy_m(54, 16);
	printf("��    �� ");
	gotoxy_m(54, 17);
	printf("��    �� ");
	gotoxy_m(54, 18);
	printf("��    �� ");
	gotoxy_m(54, 19);
	printf("��    �� ");
	gotoxy_m(54, 20);
	printf("������������ ");
	gotoxy_m(54, 25);
	printf("����������");
	gotoxy_m(54, 26);
	printf("����������");
	gotoxy_m(54, 27);
	printf("����������");
	gotoxy_m(54, 28);
	printf("����������");
	gotoxy_m(54, 29);
	printf("����");
	gotoxy_m(54, 30);
	printf("����");
	gotoxy_m(35, 43);
	printf("��� â���� ���� ����, �޺�, ����� �� �� �ֽ��ϴ�.");
}

void page5()
{
	gotoxy_m(33, 20);
	printf("��������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 21);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 22);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 23);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 24);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 25);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 26);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 27);
	printf("��              ��              ��              ��              ��");
	gotoxy_m(33, 28);
	printf("��������������������������������������������������������������������������������������������������������������������������");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(35 + i, 22 + j);
			if (alphabet[3][j][i] == 1)
			{
				printf("��");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(42 + i, 22 + j);
			if (alphabet[5][j][i] == 1)
			{
				printf("��");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(50 + i, 22 + j);
			if (alphabet[9][j][i] == 1)
			{
				printf("��");
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			gotoxy_m(57 + i, 22 + j);
			if (alphabet[10][j][i] == 1)
			{
				printf("��");
			}
		}
	}
	gotoxy_m(29, 43);
	printf("���� â���� Ű���� ������ ���� ����Ű�� ����Ű�� ������ Ű�� �ٲ� �� �ֽ��ϴ�.");
}

void page6()
{
	int i = 0, k = 20;
	gotoxy_m(41, 15);
	printf("�뷡�� �����ϼ���");
	gotoxy_m(31, k);
	printf("��");
	for (int j = 20; j <= 28; j += 2)
	{
		gotoxy_m(33, j);
		color(15);
		printf("%s", music[i]);
		i++;
	}
	gotoxy_m(39, 43);
	printf("Ŀ���� �ǿ����� ���� �뷡�� �����մϴ�.");
}

void page7()
{
	gotoxy_m(33, 4);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 5);
	printf("��     1      ��     2      ��     3      ��     4      ��     5      ��");
	gotoxy_m(33, 6);
	printf("��            ��            ��            ��            ��            ��");
	gotoxy_m(33, 7);
	printf("��            ��            ��            ��            ��            ��");
	gotoxy_m(33, 8);
	printf("��  ��        ��    ��      ��      ��    ��        ��  ��  ���      ��");
	gotoxy_m(33, 9);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 10);
	printf("��     11     ��     12     ��     13     ��     14     ��     15     ��");
	gotoxy_m(33, 11);
	printf("��            ��            ��            ��            ��            ��");
	gotoxy_m(33, 12);
	printf("��            ��            ��            ��            ��            ��");
	gotoxy_m(33, 13);
	printf("��    ����  ��  ��  ���  ��  ���  ��  ��  ����    ��  �����  ��");
	gotoxy_m(33, 14);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 15);
	printf("��     21     ��     22     ��     23     ��     24     ��     25     ��");
	gotoxy_m(33, 16);
	printf("��  ��        ��  ��        ��    ��      ��    ��      ��    ��      ��");
	gotoxy_m(33, 17);
	printf("��  ��        ��  ��        ��    ��      ��    ��      ��    ��      ��");
	gotoxy_m(33, 18);
	printf("��  ��  ��    ��  ��    ��  ��  ���      ��    ���    ��    ��  ��  ��");
	gotoxy_m(33, 19);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 20);
	printf("��     31     ��     32     ��     33     ��     34     ��     35     ��");
	gotoxy_m(33, 21);
	printf("��        ��  ��  ��        ��  ��        ��  ��        ��    ��      ��");
	gotoxy_m(33, 22);
	printf("��        ��  ��  ��        ��  ��        ��  ��        ��    ��      ��");
	gotoxy_m(33, 23);
	printf("��      ���  ��  ����    ��  ���  ��  ��  ��  ���  ��  ����    ��");
	gotoxy_m(33, 24);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 25);
	printf("��     41     ��     42     ��     43     ��     44     ��     45     ��");
	gotoxy_m(33, 26);
	printf("��        ��  ��        ��  ��        ��  ��  ��        ��    ��      ��");
	gotoxy_m(33, 27);
	printf("��        ��  ��        ��  ��        ��  ��  ��        ��    ��      ��");
	gotoxy_m(33, 28);
	printf("��  ���  ��  ��  ��  ���  ��    ����  ��  �����  ��  �����  ��");
	gotoxy_m(33, 29);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 30);
	printf("��     51     ��     52     ��     53     ��     54     ��     55     ��");
	gotoxy_m(33, 31);
	printf("��  ��  ��    ��  ��    ��  ��  ��    ��  ��    ���    ��    ���    ��");
	gotoxy_m(33, 32);
	printf("��  ��  ��    ��  ��    ��  ��  ��    ��  ��    ���    ��    ���    ��");
	gotoxy_m(33, 33);
	printf("��  ��  ���  ��  ���  ��  ��  ��  ���  ��  ����    ��    ����  ��");
	gotoxy_m(33, 34);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(33, 35);
	printf("��     61     ��     62     ��     63     ��     64     ��     65     ��");
	gotoxy_m(33, 36);
	printf("��  ��  ��    ��  ��    ��  ��    ���    ��    ��  ��  ��      ���  ��");
	gotoxy_m(33, 37);
	printf("��  ��  ��    ��  ��    ��  ��    ���    ��    ��  ��  ��      ���  ��");
	gotoxy_m(33, 38);
	printf("��  �����  ��  �����  ��  �����  ��  �����  ��  �����  ��");
	gotoxy_m(33, 39);
	printf("������������������������������������������������������������������������������������������������������������������������������������");
	gotoxy_m(38, 43);
	printf("ǥ�� �´� ���ڸ� �Է��ϸ� ��Ʈ�� ����˴ϴ�.");
}

void page8()
{
	gotoxy_m(41, 23);
	printf("��");
	gotoxy_m(40, 24);
	printf("��  ��");
	gotoxy_m(40, 25);
	printf("0.001");
	gotoxy_m(41, 26);
	printf("��");
	gotoxy_m(46, 23);
	printf("��");
	gotoxy_m(44, 24);
	printf("�ӵ�  ����");
	gotoxy_m(45, 25);
	printf("0.001");
	gotoxy_m(46, 26);
	printf("��");
	gotoxy_m(51, 23);
	printf("��");
	gotoxy_m(50, 24);
	printf("��  Ʈ");
	gotoxy_m(50, 25);
	printf("1");
	gotoxy_m(51, 26);
	printf("��");
	gotoxy_m(56, 23);
	printf("��");
	gotoxy_m(54, 24);
	printf("��Ʈ  ����");
	gotoxy_m(55, 25);
	printf("1");
	gotoxy_m(56, 26);
	printf("��");
	gotoxy_m(32, 43);
	printf("����Ű�� ����Ű�� ���� ��Ʈ�� �ӵ��� ��Ʈ�� �Է��� ���� �� �ֽ��ϴ�.");
}

void page9()
{
	gotoxy_m(40, 3);
	printf("0�� ����/100�� ����");
	gotoxy_m(37, 4);
	printf("������������������������������������������������������������������");
	gotoxy_m(37, 5);
	printf("��                               ��");
	gotoxy_m(37, 6);
	printf("��                               ��");
	gotoxy_m(37, 7);
	printf("��                               ��");
	gotoxy_m(37, 8);
	printf("��                               ��");
	gotoxy_m(37, 9);
	printf("��                               ��");
	gotoxy_m(37, 10);
	printf("��                               ��");
	gotoxy_m(37, 11);
	printf("��                               ��");
	gotoxy_m(37, 12);
	printf("��                               ��");
	gotoxy_m(37, 13);
	printf("��                               ��");
	gotoxy_m(37, 14);
	printf("��                               ��");
	gotoxy_m(37, 15);
	printf("��                               ��");
	gotoxy_m(37, 16);
	printf("��                               ��");
	gotoxy_m(37, 17);
	printf("��                               ��");
	gotoxy_m(37, 18);
	printf("��                               ��");
	gotoxy_m(37, 19);
	printf("��                               ��");
	gotoxy_m(37, 20);
	printf("��                               ��");
	gotoxy_m(37, 21);
	printf("��                               ��");
	gotoxy_m(37, 22);
	printf("��                               ��");
	gotoxy_m(37, 23);
	printf("��                               ��");
	gotoxy_m(37, 24);
	printf("��                               ��");
	gotoxy_m(37, 25);
	printf("��                               ��");
	gotoxy_m(37, 26);
	printf("��                               ��");
	gotoxy_m(37, 27);
	printf("��                               ��");
	gotoxy_m(37, 28);
	printf("��                               ��");
	gotoxy_m(37, 29);
	printf("��                               ��");
	gotoxy_m(37, 30);
	printf("��                               ��");
	gotoxy_m(37, 31);
	printf("��                               ��");
	gotoxy_m(37, 32);
	printf("��                               ��");
	gotoxy_m(37, 33);
	printf("��                               ��");
	gotoxy_m(37, 34);
	printf("��                               ��");
	gotoxy_m(37, 35);
	printf("��                               ��");
	gotoxy_m(37, 36);
	printf("��                               ��");
	gotoxy_m(37, 37);
	printf("��                               ��");
	gotoxy_m(37, 38);
	printf("��                               ��");
	gotoxy_m(37, 39);
	printf("��                               ��");
	gotoxy_m(37, 40);
	printf("��                               ��");
	gotoxy_m(37, 41);
	printf("������������������������������������������������������������������");
	gotoxy_m(43, 40);
	printf("�� 1/1 ��");
	gotoxy_m(36, 43);
	printf("�Էµ� ��Ʈ�� ���⼭ Ȯ�� �� �� �ֽ��ϴ�.");
}

void page_null()
{
	gotoxy_m(26, 3);
	printf("                                                                                          ");
	gotoxy_m(26, 4);
	printf("                                                                                          ");
	gotoxy_m(26, 5);
	printf("                                                                                          ");
	gotoxy_m(26, 6);
	printf("                                                                                          ");
	gotoxy_m(26, 7);
	printf("                                                                                          ");
	gotoxy_m(26, 8);
	printf("                                                                                          ");
	gotoxy_m(26, 9);
	printf("                                                                                          ");
	gotoxy_m(26, 10);
	printf("                                                                                          ");
	gotoxy_m(26, 11);
	printf("                                                                                          ");
	gotoxy_m(26, 12);
	printf("                                                                                          ");
	gotoxy_m(26, 13);
	printf("                                                                                          ");
	gotoxy_m(26, 14);
	printf("                                                                                          ");
	gotoxy_m(26, 15);
	printf("                                                                                          ");
	gotoxy_m(26, 16);
	printf("                                                                                          ");
	gotoxy_m(26, 17);
	printf("                                                                                          ");
	gotoxy_m(26, 18);
	printf("                                                                                          ");
	gotoxy_m(26, 19);
	printf("                                                                                          ");
	gotoxy_m(26, 20);
	printf("                                                                                          ");
	gotoxy_m(26, 21);
	printf("                                                                                          ");
	gotoxy_m(26, 22);
	printf("                                                                                          ");
	gotoxy_m(26, 23);
	printf("                                                                                          ");
	gotoxy_m(26, 24);
	printf("                                                                                          ");
	gotoxy_m(26, 25);
	printf("                                                                                          ");
	gotoxy_m(26, 26);
	printf("                                                                                          ");
	gotoxy_m(26, 27);
	printf("                                                                                          ");
	gotoxy_m(26, 28);
	printf("                                                                                          ");
	gotoxy_m(26, 29);
	printf("                                                                                          ");
	gotoxy_m(26, 30);
	printf("                                                                                          ");
	gotoxy_m(26, 31);
	printf("                                                                                          ");
	gotoxy_m(26, 32);
	printf("                                                                                          ");
	gotoxy_m(26, 33);
	printf("                                                                                          ");
	gotoxy_m(26, 34);
	printf("                                                                                          ");
	gotoxy_m(26, 35);
	printf("                                                                                          ");
	gotoxy_m(26, 36);
	printf("                                                                                          ");
	gotoxy_m(26, 37);
	printf("                                                                                          ");
	gotoxy_m(26, 38);
	printf("                                                                                          ");
	gotoxy_m(26, 39);
	printf("                                                                                          ");
	gotoxy_m(26, 40);
	printf("                                                                                          ");
	gotoxy_m(26, 41);
	printf("                                                                                          ");
}