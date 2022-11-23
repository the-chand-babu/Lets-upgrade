

let start = document.querySelector("#start");
start.addEventListener("click",starting);
let counter = 0;
let box = document.querySelector("#container");
let d ;
function starting(){
    box.innerHTML="";
    
    let arr = JSON.parse(localStorage.getItem("images"))||[];
    
    

   let Image = document.createElement("img");
    Image.src=arr[counter];
    box.append(Image);




   d= setInterval(function(){
        if(counter== arr.length){
            counter=0;
        }
        Image.src= arr[counter];
        
        counter++;
        
    },3000)


}

let stop = document.querySelector("#paush").addEventListener("click",paushing);

function paushing(){
    clearInterval(d);
}