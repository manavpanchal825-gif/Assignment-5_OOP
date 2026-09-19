class Instagram {

    // Encapsulation
    private String password;

    public void setPassword(String password) {
        this.password = password;
    }

    public String getPassword() {
        return password;
    }

    // Abstraction example
    public void uploadPhoto() {
        System.out.println("Photo uploaded");
    }
}