class FlipkartSearch {

    // Search by product name
    void searchProduct(String productName) {
        System.out.println("Searching for: " + productName);
    }

    // Search by product name and category
    void searchProduct(String productName, String category) {
        System.out.println("Searching for: " + productName);
        System.out.println("Category: " + category);
    }

    public static void main(String[] args) {

        FlipkartSearch search = new FlipkartSearch();

        // Search using product name
        search.searchProduct("Laptop");

        System.out.println();

        // Search using product name + category
        search.searchProduct("Laptop", "Electronics");
    }
}