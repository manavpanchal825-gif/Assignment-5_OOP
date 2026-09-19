class UserProfile {

    // Private phone number
    private String phoneNumber;

    // Setter
    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    // Getter
    public String getPhoneNumber() {
        return phoneNumber;
    }

    public static void main(String[] args) {

        UserProfile user = new UserProfile();

        user.setPhoneNumber("9876543210");

        System.out.println("Phone Number: " + user.getPhoneNumber());
    }
}