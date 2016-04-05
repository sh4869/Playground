class Student {
    constructor(firstname, middleinitial, lastname) {
        this.firstname = firstname;
        this.middleinitial = middleinitial;
        this.lastname = lastname;
        this.fullname = firstname + " " + middleinitial + " " + lastname;
    }
}
function greeter(person) {
    return "Hello, " + person.firstname + " " + person.lastname;
}
var user = new Student("Jane", "M.", "User");
document.body.innerHTML = greeter(user);
