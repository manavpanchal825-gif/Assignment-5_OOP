class PaymentProcessor {

    // Method 1: only amount
    void processPayment(double amount) {
        System.out.println("Payment without coupon");
        System.out.println("Final amount: " + amount);
    }

    // Method 2: amount + coupon
    void processPayment(double amount, String couponCode) {
        System.out.println("Payment with coupon: " + couponCode);

        double discount = 100;
        double finalAmount = amount - discount;

        System.out.println("Final amount: " + finalAmount);
    }

    public static void main(String[] args) {

        PaymentProcessor payment = new PaymentProcessor();

        payment.processPayment(1000);

        System.out.println();

        payment.processPayment(1000, "SAVE100");
    }
}