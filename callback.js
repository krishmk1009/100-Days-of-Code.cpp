const players = [{ name: "mk", sport: "cricket" },
{ name: "krushna", sport: "football" }
]


function addPlayer(player,callback) {
    setTimeout(function () {
        players.push(player);
        console.log("player has been added");
        callback();

    }, 3000);
}


function getPlayer() {
    setTimeout(function () {
        players.forEach(element => {
            console.log(element.name)
        });
        console.log("players have  been fetched");

    }, 1000);
}
addPlayer({ name: "shraddha", sport: "badminton" } , getPlayer)
