#ifndef EMERGENCYPORTAL_H
#define EMERGENCYPORTAL_H

const char emergencyPortal[] PROGMEM = R"=====(
<!DOCTYPE html><html><head> <meta charset="utf-8"> <meta http-equiv="X-UA-Compatible" content="IE=edge"> <title>Swiss Emergency Network</title> <meta name="description" content="Swiss Emergency Network Powered by the ClusterDuck Protocol"> <meta name="viewport" content="width=device-width, initial-scale=1"> <style>body{margin: 0; background-color: #fff; font-family: Helvetica, sans-serif;}header{padding: 1em;}input{min-height: 2em;}label{display: inline-block;}input[type=checkbox], input[type=radio]{min-width: 2em; min-height: 2em;}.container{margin-left: auto; margin-right: auto; max-width: 600px;}.container-main{padding: 0; background: #fff; margin-top: 0; box-shadow: 0 0 60px 0 rgba(0, 0, 0, 0.6);}.flex, .flex-row, .flex-col{display: flex;}.flex-col{flex-direction: column;}.grow-1{flex-grow: 1;}.align-center{align-items: center;}.px-16{padding-left: 1em; padding-right: 1em;}.mb-16{margin-bottom: 1em;}.pb-16{padding-bottom: 1em;}.h-32{height: 10em;}.mr-8{margin-right: 0.5em;}</style></head><body><div class="container container-main"> <header> <svg width="223.97px" height="55.993px" viewBox="0 0 223.97 55.993" xml:space="preserve" xmlns="http://www.w3.org/2000/svg"><path d="m30.989 2.827s-5.638-2.469-15.077-2.469h-3e-3c-9.44 0-15.079 2.469-15.079 2.469s-0.505 10.933 1.635 17.115c3.78 10.87 13.442 13.923 13.442 13.923h6e-3s9.66-3.053 13.442-13.923c2.14-6.182 1.634-17.115 1.634-17.115z" fill="#f00"/> <polygon points="25.93 12.252 25.93 18.276 18.902 18.276 18.902 25.304 12.878 25.304 12.878 18.276 5.85 18.276 5.85 12.252 12.878 12.252 12.878 5.226 18.901 5.226 18.902 12.252" fill="#fff"/> <text x="42.453129" y="10.712472" fill="#000000" font-family="sans-serif" font-size="10.667px" letter-spacing=".25px" word-spacing="0px" xml:space="preserve"> <tspan x="42.453129" y="10.712472">Schweizerische Eidgenossenschaft</tspan> <tspan x="42.453129" y="25.112518">Confédération suisse</tspan> <tspan x="42.453129" y="39.512562">Confederazione Svizzera</tspan> <tspan x="42.453129" y="53.912609">Confederaziun svizra</tspan></text></svg> </header> <div class="px-16"> <h2>Emergency Network</h2> <p>You are connected to an emergency network. Fill out the form to share your status with first responders.</p></div><form action="/formSubmit" method="post"> <div id="form" class="flex flex-col px-16"> <div class="flex-col mb-16"> <label for="firstName">Full Name</label> <input class="textbox textbox-full" name="firstName" id="firstName" type="text" autocomplete="name"/> </div><div class="flex-col mb-16"> <label for="streetAddress">Street Address</label> <input class="textbox textbox-full" name="streetAddress" id="streetAddress" type="text" autocomplete="street-address"/> </div><div class="flex-col mb-16"> <label for="city">City</label> <input class="textbox textbox-full" id="city" name="city" type="text" autocomplete="address-level2"/> </div><div class="flex-col mb-16"> <label for="phone">Phone</label> <input class="textbox textbox-full" id="phone" name="phone" type="tel"/> </div><div class="flex-col mb-16"> <fieldset class="flex-col"> <legend>Current Status</legend> <div class="flex align-center mb-16"> <input class="mr-8" name="status" id="currentStatusSos" type="radio" value="sos"/> <label class="grow-1 p" for="currentStatusSos">I'm in immediate danger (SOS)</label> </div><div class="flex align-center"> <input class="mr-8" name="status" id="currentStatusOk" type="radio" value="ok"/> <label class="grow-1" for="currentStatusOk">OK</label> </div></fieldset> </div><div class="flex-col mb-16"> <fieldset class="flex-col"> <legend>Needs</legend> <div class="flex align-center mb-16"> <input class="mr-8" type="checkbox" name="water" id="waterNeed" value="water"/> <label class="grow-1" for="waterNeed">Water</label> </div><div class="flex align-center mb-16"> <input class="mr-8" name="transportation" id="transportationNeed" type="checkbox" value="transportation"/> <label class="grow-1" for="transportationNeed">Transportation</label> </div><div class="flex align-center mb-16"> <input class="mr-8" type="checkbox" name="food" id="foodNeed" value="food"/> <label class="grow-1" for="foodNeed">Food</label> </div><div class="flex align-center mb-16"> <input class="mr-8" name="inspection" id="inspectionNeed" type="checkbox" value="inspection"/> <label class="grow-1" for="inspectionNeed">Structural Inspection</label></div><div class="flex align-center mb-16"> <input class="mr-8" type="checkbox" name="firstaid" id="firstAidNeed" value="firstaid"/> <label class="grow-1" for="firstAidNeed">First Aid</label> </div><div class="flex align-center"> <input class="mr-8" name="shelter" type="checkbox" id="shelterNeed" value="shelter"/> <label class="grow-1" for="shelterNeed">Shelter</label> </div></fieldset> </div><div class="flex-col mb-16"> <fieldset> <legend>How many people are with you?</legend> <div class="flex-col mb-16"> <span><label for="adultsInput">Adults</label> </span><input class="textbox textbox-small" name="adults" id="adultsInput" type="text" inputmode="decimal"/> </div><div class="flex-col mb-16"> <span><label for="childrenInput">Children</label> </span><input class="textbox textbox-small" name="children" id="childrenInput" type="text" inputmode="decimal"/> </div><div class="flex-col mb-16"> <span><label for="elderlyInput">Elderly</label> </span><input class="textbox textbox-small" name="elderly" id="elderlyInput" type="text" inputmode="decimal"/> </div></fieldset> </div><div class="flex-col mb-16"> <label for="petsInput">Pets</label> <input name="pets" id="petsInput" type="text"/> </div><div class="flex-col mb-16"> <label for="commentsInput">Additional Comments</label> <textarea class="textbox comments h-32" name="message" id="commentsInput"></textarea> </div><div class="flex-col"><input type="submit" class="button-on" id="sendReportBtn" value="SEND REPORT"/></div></div><div id="count">Count</div></form></div><script type="text/javascript">const onEdit=function (){const allLength=Array.prototype.slice.call(document.getElementsByTagName("input")) .concat(Array.prototype.slice.call(document.getElementsByTagName("textarea"))) .filter(e=> e.type !=="submit" && e.type !=="button" && e.type !=="checkbox" && e.type !=="radio" || e.checked) .map(e=> e.value.length) .reduce((acc, value)=> acc + value, 0); if (130 > allLength){document.getElementById("count").innerHTML='Length ' + allLength + "/130"; document.getElementById("sendReportBtn").classList.add("button-on"); document.getElementById("count").classList.remove("alert");}else{document.getElementById("count").innerHTML='Length ' + allLength + "/130"; document.getElementById("count").classList.add("alert"); document.getElementById("sendReportBtn").classList.remove("button-on");}}; document.onkeyup=onEdit document.onclick=onEdit document.onpaste=onEdit onEdit();</script></body></html>
)=====";

#endif