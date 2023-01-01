
let data=[
    {name:'HTML', marks:80},
    {name:'CSS',marks:15},
    {name:'JS',marks:50},
    {name:'Node',marks:92},
    {name:'Express',marks:25}
]
const randomHexColorCode=()=>{
var hexcolor="#"+Math.random().toString(16).slice(2,8)
console.log('the hex value is '+hexcolor);
return hexcolor;

}
document.addEventListener('DOMContentLoaded',()=>{
    let canvas=document.getElementById('canvas');
    let context=canvas.getContext('2d');
    canvas.height=300;
    canvas.width=350;

    let total=data.reduce((ttl,subject)=>{
        return ttl+subject.marks
    },0)

    let startAngle=0;
    let radius=100;
    let cx=canvas.width/2;
    let cy=canvas.height/2;

    data.forEach(subject=>{
        context.fillStyle=randomHexColorCode();
        context.lineWidth=1;
        context.strokeStyle='#333';
        context.beginPath();
        // console.log(total,subject.marks,subject.marks/total);
        

        let endAngle=((subject.marks/total)*(Math.PI*2))+startAngle;
        console.log(endAngle);
        
        context.moveTo(cx,cy);
        context.arc(cx,cy,radius,startAngle,endAngle);
        // context.lineTo(cx,cy);
        context.fill();
        context.stroke();
        // context.closePath();
        

        context.font='20px calibri'
        context.textAlign='center'
        context.fillStyle='blue'
        let theta=(startAngle+endAngle)/2;

        console.log('theta is'+theta);

        let hypotenuse=radius;
        
        let breadth=Math.cos(theta)*1.3* hypotenuse;
        let height=Math.sin(theta)* 1.3*hypotenuse;


        context.fillText(subject.name,cx+breadth,cy+height)
      
        context.closePath()

        startAngle=endAngle
    })
})

// ===============================bar canvas=======================


