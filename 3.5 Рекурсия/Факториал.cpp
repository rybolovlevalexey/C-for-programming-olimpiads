//Пишите вашу рекурсивную функцию factorial здесь
long int factorial(int n){
    if (n == 1 || n == 0){
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}
