abstract class Product {

    // Abstract method
    abstract void upload();
}

class Electronics extends Product {

    @Override
    void upload() {
        System.out.println("Uploading electronics product to Flipkart");
    }
}

class Clothing extends Product {

    @Override
    void upload() {
        System.out.println("Uploading clothing product to Flipkart");
    }
}

class ProductTest {

    public static void main(String[] args) {

        Product product1 = new Electronics();
        product1.upload();

        Product product2 = new Clothing();
        product2.upload();
    }
}