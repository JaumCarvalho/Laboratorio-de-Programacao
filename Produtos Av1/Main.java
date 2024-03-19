public class Main{
    public static void main(String[] args) {
        int numero = 5;
        CalculadoraFatorial calculadora = new CalculadoraFatorial(numero);
        int fatorial = calculadora.calcularFatorial();
        System.out.println("O fatorial de " + numero + " é " + fatorial);
    }
}

/*

public class CalculadoraFatorial {
    private int numero;

    public CalculadoraFatorial(int numero) {
        this.numero = numero;
    }

    public int calcularFatorial() {
        int resultado = 1;
        for (int i = 1; i <= numero; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}


*/
