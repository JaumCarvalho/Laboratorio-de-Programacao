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
