int main()
{
    char c = 'A';
    char *str = "Hello, World!";
    int num = -123;
    unsigned int unum = 456;
    void *ptr = &num;
    int age = 24;
    char *name = "isacc";

    ft_printf("dfg%%gre\n");
    printf("dfg%%gre\n");
    ft_printf("myChar : %c\n", c);
    printf("orgChar: %c\n", c);
    ft_printf("myString : %s\n", str);
    printf("orgString: %s\n", str);
    ft_printf("myPointer : %p\n", ptr);
    printf("orgPointer: %p\n", ptr);
    ft_printf("myDecimal : %d\n", num);
    printf("orgDecimal: %d\n", num);
    ft_printf("myUnsigned Decimal : %u\n", unum);
    printf("orgUnsigned Decimal: %u\n", unum);
    ft_printf("myHexadecimal (lowercase) : %x\n", num);
    printf("orgHexadecimal (lowercase): %x\n", num);
    ft_printf("myHexadecimal (uppercase) : %X\n", num);
    printf("orgHexadecimal (uppercase): %X\n", num);
    ft_printf("myPercentage : %%\n"); // Yüzde işareti yazdırma
    printf("orgPercentage: %%\n");
    ft_printf("myMorethenone :  hi I am %d years old and I am %s\n", age, name);
    printf("orgMorethenone:  hi I am %d years old and I am %s\n", age, name);

    return 0;
}
