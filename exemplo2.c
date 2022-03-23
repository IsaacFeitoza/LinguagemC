int main(int argc, char const *argv[])
{
    int sizer =26;
    char alfabeto[size]; 
    char primeira_letar = 'A';

    for(int i = 0; i < size ; i++){
        alfabeto[i] = i + primeira_letra;
        printf("%d", alfabeto[i]);
    }

    return 0;
}