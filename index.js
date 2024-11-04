let express=require('express');
let app=express();
let cors=require('cors');
const basic = require('./Routes/Route');
const newroutes=require('./Routes/firstRoute')
app.use(cors())
let port=8080

app.use('/basic',basic)
app.use('/new',newroutes)

app.listen(port,()=>{console.log(`running on port ${port}`)})