import java.util.concurrent.*;
import java.util.*;

public class Ejercicio9 {
    static class SumTask extends RecursiveTask<Long> {
        private final long[] arr; int lo, hi;
        private static final int THRESHOLD = 10_000;

        SumTask(long[] arr, int lo, int hi) { this.arr = arr; this.lo = lo; this.hi = hi; }

        @Override
        protected Long compute() {
            if (hi - lo <= THRESHOLD) {
                long s = 0;
                for (int i = lo; i < hi; i++) s += arr[i];
                return s;
            }
            int mid = (lo + hi) >>> 1;
            SumTask left = new SumTask(arr, lo, mid);
            SumTask right = new SumTask(arr, mid, hi);
            left.fork();
            long rightResult = right.compute();
            long leftResult = left.join();
            return leftResult + rightResult;
        }
    }

    public static void main(String[] args) {
        int n = 1_000_000;
        long[] arr = new long[n];
        Random rnd = new Random();
        long expected = 0;
        for (int i=0;i<n;i++) { arr[i] = rnd.nextInt(100); expected += arr[i]; }

        ForkJoinPool pool = new ForkJoinPool();
        SumTask task = new SumTask(arr, 0, arr.length);
        long result = pool.invoke(task);

        System.out.println("Resultado paralelo: " + result + " (esperado " + expected + ")");
    }
}
