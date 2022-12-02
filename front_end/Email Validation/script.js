function validation(){
    var username=document.getElementById('username').value;
    var password=document.getElementById('Password').value;
    var ConfirmPassword=document.getElementById('cpassword').value;
    var Email=document.getElementById('email').value;
    var Mobile=document.getElementById('mobile').value;
   
    var usercheck=/^[A-Za-z ]{3,30}$/;
    var passwordcheck=/^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{8,16}$/;
    var emailcheck=/[A-Za-z._0-9]{3,}@[a-zA-Z]{2,}[.]{1}[a-zA-Z.]{2,6}/
    var mobilecheck=/[789][0-9]{9}/
    
    if(usercheck.test(username)){
        document.getElementById('usererror').innerHTML="valid"
    }else{
        document.getElementById('usererror').innerHTML="** Invalid Username **"
        return false;
    }
    if(passwordcheck.test(password)){
        document.getElementById('passworderror').innerHTML="valid"
    }else{
        document.getElementById('passworderror').innerHTML="** Invalid password **"
        return false;
    }
    if(password.match(ConfirmPassword)){
        document.getElementById('Cpassworderror').innerHTML=" Valid";
    }else{
        document.getElementById('Cpassworderror').innerHTML=" password not matched";
        return false;
    }
    if(emailcheck.test(Email)){
        document.getElementById('emailerror').innerHTML="valid"
    }else{
        document.getElementById('emailerror').innerHTML="Invalid"
        return false;
    }
    if(mobilecheck.test(Mobile)){
        document.getElementById('mobileerror').innerHTML="valid"
    }else{
        document.getElementById('mobileerror').innerHTML="Mobile number is Invalid"
        return false;
    }

}

