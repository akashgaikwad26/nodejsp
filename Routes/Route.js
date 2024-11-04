var express=require('express')
router=express.Router()

router.get('/get',(req,res)=>{
res.status(400).json({messgae:"succes nit"})
});

module.exports=router;