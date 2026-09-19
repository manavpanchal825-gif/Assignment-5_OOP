class FoodOrder {
    constructor(data) {
        this.orderId = data.orderId;
        this.restaurantName = data.restaurantName;
        this.isDelivered = data.isDelivered;
    }

    markDelivered() {
        this.isDelivered = true;
        console.log("Order delivered!");
    }
}

let order = new FoodOrder({
    orderId: 101,
    restaurantName: "Pizza Hub",
    isDelivered: false
});

console.log(order);

order.markDelivered();