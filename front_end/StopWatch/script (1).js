let btn = document.querySelector('button');
let output = document.querySelector('#output');
let min=document.getElementById('start-value')
let max=document.getElementById("end-value")
let minvalue=parseInt(min.value);
let mixvalue=parseInt(max.value)
function getRandomNumber(min, max) {
    let step1 = max - min + 1;
    let step2 = Math.random() * step1;
    let result = Math.floor(step2) + min;
    return result;
}
btn.addEventListener('click', () => {
    output.innerHTML = getRandomNumber(minvalue, mixvalue);
});