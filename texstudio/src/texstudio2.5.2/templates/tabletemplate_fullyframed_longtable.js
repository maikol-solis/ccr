var metaData = {
"Name"        : "Longtable",
"Description" : "Format table using the longtable environonment.", 
"Author"      : "Jan Sundermeyer",
"Date"        : "4.9.2011",
"Version"     : "1.0"
}

function print(str){
cursor.insertText(str)
}
function println(str){
cursor.insertText(str+"\n")
}
var arDef=def.split("")
println("\\begin{longtable}{|"+arDef.join("|")+"|}")
println("\\hline")
for(var i=0;i<tab.length;i++){
	var line=tab[i];
	for(var j=0;j<line.length;j++){
		print(line[j])
		if(j<line.length-1)
			print("&")
	}
	println("\\\\ \\hline")
}
println("\\end{longtable}")