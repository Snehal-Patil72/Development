express=require('express');
eobj=express();
port=5100;

function MarvellousConnect(request,response)
{
  console.log("Marvellous Server is live at port 5100");

}

eobj.listen(port,MarvellousConnect);

function MarvellousRoot(request,response)
{
    response.json({"Status":"Sucess"});
}

eobj.get("/",MarvellousRoot);

function MarvellousBatches(request,response)
{
    response.json({"PPA":"4 month","python":"3 month","Angular":"5 month"});
}

eobj.get("/getBatches",MarvellousBatches);


function MarvellousAdmin(request,response)
{
    response.json({"Mobile":"7020713938","Website":"www.marvellousinfosystem.com"});
}

eobj.get("/getAdminDetails",MarvellousAdmin);