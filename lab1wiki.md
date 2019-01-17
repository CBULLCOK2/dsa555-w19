level 1 header

This is a normal paragraph of some text, just continue with it. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque a orci a risus vulputate malesuada. Nulla mattis neque eget ligula suscipit maximus. Phasellus quis nunc vitae tellus efficitur iaculis. Duis id nunc massa. Nulla eget semper lorem. Aenean eu sem ullamcorper, ornare ex in, facilisis mi. Aenean dolor mauris, malesuada at suscipit nec, tincidunt ut ex. Sed euismod, justo eget eleifend egestas, dolor quam tincidunt turpis, et tristique odio mauris sit amet neque. Ut sit amet velit tincidunt, scelerisque quam et, sodales libero. Nulla ornare mattis elit in lacinia. Aliquam bibendum sollicitudin sem ac commodo. Fusce odio lorem, congue quis cursus ut, dictum a eros. Suspendisse vel porttitor odio, sit amet dapibus risus. Curabitur et neque odio. Nam sodales ut est sit amet malesuada. 
This is a second paragraph.  You must ensure that the formatting allows this to look like a second paragraph and not just a continuation of the first paragraphLorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque a orci a risus vulputate malesuada. Nulla mattis neque eget ligula suscipit maximus. Phasellus quis nunc vitae tellus efficitur iaculis. Duis id nunc massa. Nulla eget semper lorem. Aenean eu sem ullamcorper, ornare ex in, facilisis mi. Aenean dolor mauris, malesuada at suscipit nec, tincidunt ut ex. Sed euismod, justo eget eleifend egestas, dolor quam tincidunt turpis, et tristique odio mauris sit amet neque. Ut sit amet velit tincidunt, scelerisque quam et, sodales libero. Nulla ornare mattis elit in lacinia. Aliquam bibendum sollicitudin sem ac commodo. Fusce odio lorem, congue quis cursus ut, dictum a eros. Suspendisse vel porttitor odio, sit amet dapibus risus. Curabitur et neque odio. Nam sodales ut est sit amet malesuada. 

level 2 header

item 1 in an unordered list
item 2 in an unordered list
item 3 in an unordered list


item 1 in an ordered list
item 2 in an ordered list
item 3 in an ordered list

replace this text with a horizontal line

level 3 header here

item 1 in an unordered list
item 2 in an unordered list
item 3 in an unordered list
item 1 in an ordered sublist of under item 3
item 2 in an ordered sublist of under item 3
item 4 in an unordered list

level 2 header here

syntax highlight the following code blurbs.  The first is in c++, the second is in javascript

#include <iostream>

int main(void){
	std::cout << "hello world" << std::endl;
	return 0;
}



var AnimatedCode = function(spec){
	var that = AnimationObject (spec);
	var lines_ = spec.code;
	var highlighterStart_ = 1;
	var highlighterEnd_=1;
	var lineHeight_=14;
	var codeWidth_=spec.width||300;
	var isVisible_= true;
	var font_="Courier";
	var bgColour_ = spec.bgColour;
	var fontColour_ = spec.fontColour;
	var hlColour_ = spec.hlColour;
	if(spec.isVisible != undefined){
		isVisible_=spec.isVisible_;
	}
	if(bgColour_ == undefined){
		bgColour_=color(255);
	}
	if(fontColour_==undefined){
		fontColour_=color(0);
	}
	if(hlColour_==undefined){
		hlColour_=color(goldColour)
	}
	that.restart = function(){
		highlighterEnd_=1;
		highlighterStart_=1;
	}
	that.setWidth=function(w){
		width_=w;
	}
	that.appendCode=function(s){
		lines_.append(s);
	}
	that.setLineHeight=function(lh){
		lineHeight_=lh;
	}
	that.setHighLighter = function (params){
		if(params.ln <= lines_.length){
			highlighterStart_=params.ln-1;
			highlighterEnd_=params.ln-1;
		}
	}
	that.setBGColour = function (c){
		bgColour_=c;
	}
	that.setHighLighterColour = function(c){
		hlColour_=c;
	}
	that.setFontColour = function(c){
		fontColour_=c;
	}
	return that;
}

level 2 header here

create a link to the course repo with the text shown as "dsa555 repo"


level 2 header here

the following link contains a google docs spreadsheet with graph.  Make a copy of the sheet to your own account, then change one of the fruits to something other fruit and embed the graph as an image in that spreadsheet into this web page

https://docs.google.com/spreadsheets/d/1-6CEwST1u9qT8F-w9OLDcyEiMFlCJ40b3QaeplIogxc/edit?usp=sharing

level 4 header here

this is a normal paragraph.  Under this paragraph, there are 16 lines of text.  Use it to create a table with, 3 rows, 4 columns. Use the first four lines of the text below for column headings, the next 12 is the content of the 12 cells of the table.  place the next 4 items into the same row, then the next 4 then the next 4

column header 1
column heading 2
col heading 3
heading 4
red apple
green apple
banana
pineapple
papaya
orange
strawberry
rhubarb
ged grapes
green grapes
pomegranate
pears


This next section is completely optional.  You do not need to do it, but you may wish to do it.

end of compulsory portion of lab

Level 2 header: LaTex

(see sample output)

volume of sphere = 4/3 pi r^3

1 + 2 + 3 + 4 +...n = (use summation notation here) = ((n)(n+1))/2

