loadedInterfaceName = "The Machine";

interfaceOrientation = "portrait";

pages = [[

{
    "name": "refresh",
    "type": "Button",
    "bounds": [.6, .905, .2, .1],
    "startingValue": 0,
    "isLocal": true,
    "mode": "contact",
    "ontouchstart": "interfaceManager.refreshInterface()",
    "stroke": "#aaa",
    "label": "refrsh",
},
{
    "name": "tabButton",
    "type": "Button",
    "bounds": [.8, .905, .2, .1],
    "mode": "toggle",
    "stroke": "#aaa",
    "isLocal": true,
    "ontouchstart": "if(this.value == this.max) { control.showToolbar(); } else { control.hideToolbar(); }",
    "label": "menu",
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":0,
	"width":1,
	"height":.125,
	"address":"/btn1"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.130,
	"width":1,
	"height":.125,
	"address":"/btn2"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.260,
	"width":1,
	"height":.125,
	"address":"/btn3"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.390,
	"width":1,
	"height":.125,
	"address":"/btn4"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.520,
	"width":1,
	"height":.125,
	"address":"/btn5"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.650,
	"width":1,
	"height":.125,
	"address":"/btn6"
},

{
	"name":"buttontest",
	"type":"Button",
	"x":0,
	"y":.780,
	"width":1,
	"height":.125,
	"address":"/btn7"
},


]

];