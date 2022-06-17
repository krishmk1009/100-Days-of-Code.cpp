

const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost:27017/users');


const userSchema = new mongoose.Schema({

	name: {
		type:String,
		required:"name must be included"
	},
	age: {
		type:Number,
		min :1,
		max:10
	},
	fvrt: String
})

const User = mongoose.model("user", userSchema)

const user2 = new User({
	
	age: 3,
	fvrt: "insta"
})

const user3 = new User({
	name: "lana",
	age: 56,
	fvrt: "tweet"
})

const user4 = new User({
	name: "jordy",
	age: 56,
	fvrt: "khikhi"
})

// User.insertMany([user2,user3,user4],function(err){
// 	err ? console.log(err) : console.log("succesfully added to db")
// })
user2.save().then(()=>console.log("saved"))

User.find(function (err, users) {
	if (err) {
		console.log(err)
	}
	else {
		mongoose.connection.close()
		users.forEach((user) =>{
			console.log(user.fvrt)
		})
	}
}
)




// user.save().then(() => console.log("created"))
// fruit.save().then(() => console.log("done"))
