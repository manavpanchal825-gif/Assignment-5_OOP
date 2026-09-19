class Ticket:
    def __del__(self):
        print("Saving your ticket...")


ticket = Ticket()

print("Ticket booked!")

del ticket