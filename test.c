void test()
{
    printf("this is a test");
    for (int i = 0 ; i < 100; i++)
      asm("nop");
}
}