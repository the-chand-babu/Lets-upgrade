
let box = document.querySelector("#container");



// console.log(image)
let counter = 0;
let submit = document.querySelector("#submit");
submit.addEventListener("click",function(){

let images = JSON.parse(localStorage.getItem("images"))||[];
let image =document.querySelector("#image").value;

images.push(image);
localStorage.setItem("images",JSON.stringify(images));


})