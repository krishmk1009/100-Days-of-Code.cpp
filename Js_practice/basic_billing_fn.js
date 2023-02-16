function process() {

    const customer = document.getElementById("name").value;
    const prod1 = document.getElementById('Product1').checked;
    const prod2 = document.getElementById('Product2').checked;
    const prod3 = document.getElementById('Product3').checked;
    // const price = document.getElementById('price').value
    const bag = document.getElementById('bag').value

    const information = document.getElementById("information")
    while (information.firstChild) {
        information.removeChild(information.firstChild)
    }

    const showCustomer = document.createElement('p');
    showCustomer.textContent = "Name of Customer:" + customer;
    document.getElementById('information').appendChild(showCustomer)
    let totalPrice = 0;
    if (prod1) {
        totalPrice += 20;
    }
    if (prod2) {
        totalPrice += 10;
    }
    if (prod3) {
        totalPrice += 30;
    }

    const showPrice = document.createElement('p')

    showPrice.textContent = "Your selected product price is: " + totalPrice;
    document.getElementById('information').appendChild(showPrice)

    const finalPrice = document.createElement('p')
    finalPrice.textContent = "your total bill is Rs: " + (bag * totalPrice)
    document.getElementById('information').appendChild(finalPrice)






}
