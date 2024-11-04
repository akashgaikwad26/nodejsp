const express=require('express')
const router=express.Router()


router.get('/get',(req,res)=>{
    res.json("get from basic")
});


module.exports=router
