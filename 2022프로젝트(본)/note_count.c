#include<stdio.h>

extern int* note_wnth[10];
extern int count_note, long_note_long;

//1 ~ 4     1��
//5 ~10     2��
//11 ~14     3��
//15     4��
//16 ~19     long_note_long��
//20 ~31     long_note_long + 1��
//32 ~43     long_note_long + 2��
//44 ~47     long_note_long + 3��
//48 ~59     long_note_long * 2 + 1��
//60 ~65     long_note_long * 2 + 2��
//66 ~69     long_note_long * 3 + 1��
//70     long_note_long * 4��
//71 ~76     long_note_long * 2��
//77 ~80     long_note_long * 3��

void note_count(int x)
{
	for (int i = 0; i < 100000; i++)
	{
		if (note_wnth[x][i] != 0 && note_wnth[x][i] != 100)
		{
			if (note_wnth[x][i] >= 1)
			{
				if (note_wnth[x][i] >= 5)
				{
					if (note_wnth[x][i] >= 11)
					{
						if (note_wnth[x][i] >= 15)
						{
							if (note_wnth[x][i] >= 16)
							{
								if (note_wnth[x][i] >= 20)
								{
									if (note_wnth[x][i] >= 32)
									{
										if (note_wnth[x][i] >= 44)
										{
											if (note_wnth[x][i] >= 48)
											{
												if (note_wnth[x][i] >= 60)
												{
													if (note_wnth[x][i] >= 66)
													{
														if (note_wnth[x][i] >= 70)
														{
															if (note_wnth[x][i] >= 71)
															{
																if (note_wnth[x][i] >= 77)
																{
																	count_note += long_note_long * 3;
																}
																else
																{
																	count_note += long_note_long * 2;
																}
															}
															else
															{
																count_note += long_note_long * 4;
															}
														}
														else
														{
															count_note += long_note_long * 3 + 1;
														}
													}
													else
													{
														count_note += long_note_long * 2 + 2;
													}
												}
												else
												{
													count_note += long_note_long * 2 + 1;
												}
											}
											else
											{
												count_note += long_note_long + 3;
											}
										}
										else
										{
											count_note += long_note_long + 2;
										}
									}
									else
									{
										count_note += long_note_long + 1;
									}
								}
								else
								{
									count_note += long_note_long;
								}
							}
							else
							{
								count_note += 4;
							}
						}
						else
						{
							count_note += 3;
						}
					}
					else
					{
						count_note += 2;
					}
				}
				else
				{
					count_note += 1;
				}
			}
		}
	}
}