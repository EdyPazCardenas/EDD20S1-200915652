//Tarea 1 Matriz con parametro m para MxM
public class Matriz {

    public static void main(String[] args) {

        int m = 11;//matriz MxM

        int[][] a = new int[m][m];

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < m; i++) {
                    if(j==0|| i==0||i==m-1||j==m-1){
                         a[j][i] = 1;
                    }
          
                    System.out.print(a[j][i]);
            }
            System.out.print("\n");

        }

    }
