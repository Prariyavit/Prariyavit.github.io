int main() {
    int x = 10;
    int *p;  // pointer to int
    int **pp; // pointer to pointer to int
    p = &x;
    pp = &p;
    
    printf("%p\n",&p);
    printf("%p\n",pp);  
    printf("%p\n",&(*pp));
    puts("------------------");
    printf("%p\n",p); 
    printf("%p\n",*pp); 
    printf("%p\n",&x);
    printf("%p\n",&(**pp));
    printf("%p\n",&(*p));
    puts("------------------");
    printf("%p\n",&pp);
    puts("------------------");
    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",**pp);
    printf("%d\n",**pp);
} 