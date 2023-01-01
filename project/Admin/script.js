let menubutton= document.querySelector(".menu-btn");
let sidebar= document.querySelector(".aside");
let asideBar=document.querySelector(".sidebar");
let closebutton= document.querySelector(".close");
const darkbtn=document.getElementById("dark-mode");
const lightbtn=document.getElementById("light-mode");
let feestatus=document.getElementById("feeStatus");
let table = document.querySelector("table");
let recentHighlight= document.querySelector(".recent-highlights")
let studentHighlight= document.querySelector(".student-analysis")


let insightbox= document.querySelectorAll(".insights>.insight-box");




menubutton.onclick=()=>{
    sidebar.style.display='block';
    sidebar.transitionDelay ="all 9s linear"
    
    
    menubutton.style.visibility='hidden'
    closebutton.style.visibility='visible'

}
closebutton.onclick=()=>{
    menubutton.style.visibility='visible'
    closebutton.style.visibility='hidden'
    sidebar.style.display='none';
}
darkbtn.onclick=()=>{
    document.body.style.background=" #353839"
    lightbtn.style.background="none"
    darkbtn.style.background="blue"
    for(let i=0 ; i<4 ;i ++){
        insightbox[i].style.background="grey"
        insightbox[i].style.boxShadow="0 0 10px 9px black"
    }
    table.style.background="black"
    table.style.color="#faf0e6"
    asideBar.style.backgroundImage="none"
    asideBar.style.color="#faf0e6"
    recentHighlight.style.background="black"
    studentHighlight.style.background="black"
    recentHighlight.style.color="#faf0e6"
    studentHighlight.style.color="#faf0e6"
    recentHighlight.style.boxShadow="5px 5px 5px 5px black"
    studentHighlight.style.boxShadow="5px 5px 5px 5px black"

    
}
lightbtn.onclick=()=>{
    
    // lightbtn.style.height="2rem"
    lightbtn.style.background="blue"
    darkbtn.style.background="none"

    document.body.style.background="#BFC7BD"
    for(let i=0 ; i<4 ;i ++){
        insightbox[i].style.background="white"
        insightbox[i].style.boxShadow="5px 5px 5px 5px gainsboro"
    }
    table.style.background="white"
    table.style.color="black"
    asideBar.style.backgroundImage="linear-gradient(to right top, #908e5f, #b9997d, #d0aaa4, #d9c0c8, #dfd9e0)"
    recentHighlight.style.background="#faf0e6"
    studentHighlight.style.background="#faf0e6"
    studentHighlight.style.boxShadow="5px 5px 5px 5px gainsboro"
    recentHighlight.style.boxShadow="5px 5px 5px 5px gainsboro"
    recentHighlight.style.color="black"
    studentHighlight.style.color="black"
}

const studentdata=[
    
        {
            studentName:'Gloria',
            studentUid:'48',
            studentCourse:'Fashion',
            feeStatus:'Completed'
        },
        {
            studentName:'Gloria',
            studentUid:'48',
            studentCourse:'Fashion',
            feeStatus:'pending'
        },
        {
            studentName:'Gloria',
            studentUid:'48',
            studentCourse:'Fashion',
            feeStatus:'Completed'
        },
        {
            studentName:'Gloria',
            studentUid:'48',
            studentCourse:'Fashion',
            feeStatus:'Completed'
        },
        {
            studentName:'Gloria',
            studentUid:'48',
            studentCourse:'Fashion',
            feeStatus:'Completed'
        }  
    
]
studentdata.forEach(element=>{
    const tr=document.createElement('tr');
    const td1=document.createElement('td')
    const td2=document.createElement('td')
    const td3=document.createElement('td')
    const td4=document.createElement('td')
    const td5=document.createElement('td')

    td4.innerText=element.feeStatus;
    td1.innerHTML=element.studentName
    td2.innerHTML=element.studentUid
    td3.innerHTML=element.studentCourse
 
    // const trContent=`
    // <td>${element.studentName}</td>
    // <td>${element.studentUid}</td>
    // <td>${element.studentCourse}</td>
    // <td class="feeStatus">${element.feeStatus}</td>
    // <td class="primary">details</td>
    // `;

    if(element.feeStatus=='Completed'){
     
        td4.style.color="green"
    }else{
       
        td4.style.color="red"
    }
    

tr.append(td1,td2,td3,td4)

    document.querySelector('table tbody').appendChild(tr);
})
