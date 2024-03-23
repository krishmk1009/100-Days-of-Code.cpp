import "./styles.css";
import _ from "lodash";
document.getElementById("app").innerHTML = `
<h1>Hello JavaScript!</h1>
`;

const btn = document.getElementById("btn");

const pressedP = document.getElementById("pressed");

const triggeredP = document.getElementById("triggered");
let presseCount = 0;
let triggeredCount = 0;

const debounceCount = _.debounce(
  () => {
    triggeredP.innerHTML = ++triggeredCount;
  },
  [800],
  []
);

btn.addEventListener("click", () => {
  pressedP.innerHTML = ++presseCount;
  console.log(presseCount);
  debounceCount();
});
