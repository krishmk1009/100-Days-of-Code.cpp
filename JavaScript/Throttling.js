import "./styles.css";
import _ from "lodash";

document.getElementById("app").innerHTML = `
<h1>Hello JavaScript!</h1>
`;

const btn = document.getElementById("btn");
const pressedP = document.getElementById("pressed");
const triggeredP = document.getElementById("triggered");
let pressCount = 0;
let triggeredCount = 0;

const throttleFn = _.throttle(() => {
  triggeredP.innerHTML = ++triggeredCount;
}, 800);

btn.addEventListener("click", () => {
  pressedP.innerHTML = ++pressCount;
  console.log(pressCount);
  throttleFn();
});
