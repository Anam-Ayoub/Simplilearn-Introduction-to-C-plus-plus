int fct(int x){

    int fac = x;
    for (int i = x-1 ; i>=1 ; i--){

        fac = fac * i;
    }
    return (fac);
}