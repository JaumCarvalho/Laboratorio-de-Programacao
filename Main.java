public class Main{
    public static void main(String[] args) {
        int numero = 5;
        CalculadoraFatorial calculadora = new CalculadoraFatorial(numero);
        int fatorial = calculadora.calcularFatorial();
        System.out.println("O fatorial de " + numero + " é " + fatorial);
    }
}
