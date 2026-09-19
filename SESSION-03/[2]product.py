class Product:
    def __init__(self, productName, price, rating):
        self.productName = productName
        self.price = price
        self.rating = rating

    def displayInfo(self):
        print("Product:", self.productName)
        print("Price:", self.price)
        print("Rating:", self.rating)


product = Product("Laptop", 50000, 4.5)

product.displayInfo()