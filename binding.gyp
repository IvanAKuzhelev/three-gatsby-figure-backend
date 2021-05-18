{
	"targets": [{
		"target_name": "calculator",
		"include_dirs" : [
			"calculator/CppSrc",
			"<!(node -e \"require('nan')\")"
		],
		"sources": [
			"calculator/CppSrc/index.cpp",
			"calculator/CppSrc/triangulateCone.cpp"
		]
	}]
}