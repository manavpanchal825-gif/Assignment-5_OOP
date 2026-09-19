class FoodOrder {
    constructor(orderId, restaurantName, isDelivered) {
        this.orderId = orderId;
        this.restaurantName = restaurantName;
        this.isDelivered = isDelivered;
    }

    markDelivered() {
        this.isDelivered = true;
        console.log("Order delivered!");
    }
}

let order = new FoodOrder(101, "Pizza Hub", false);

order.markDelivered();