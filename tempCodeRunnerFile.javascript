let data=[
    {
    title:"Learn HTML",
    status:"done",
    },

    {
    title:"Learn CSS",
    status:"doing",
    }

    {
        title:"Learn Javacript",
        status:"todo",
    }
]

if(currId=="doing")
{
    dataforEach(task=>{
        if(task.title=="item.innerText")
        {
            task.status="doing"
        }
    })
}

if(currId=="done")
{
    data.forEach(task=>{
        if(task.title==item.innerText)
        {
            task.status="done"
        }
    })
}

dropzone.appendChild(item)
event.datatransfer.clearData();