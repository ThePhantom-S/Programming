#datatypes in bash
#!/bin/bash

#Bash does not have built-in support for complex data types like other programming languages, but it can handle various types of data using variables and arrays. Here are some common data types in Bash:


#string
name="John Doe"
echo "Name: $name"
#integer
age=30
echo "Age: $age"
#array
fruits=("Apple" "Banana" "Cherry")
echo "Fruits: ${fruits[@]}"
#associative array (dictionary)
declare -A person
person["name"]="Alice"
person["age"]=25
echo "Person Name: ${person[name]}"
echo "Person Age: ${person[age]}"   
#boolean (using integers)
is_student=1  # 1 for true, 0 for false
if [ $is_student -eq 1 ]; then
    echo "Is a student"
else
    echo "Is not a student"
fi  #null
unset name  # Unsetting a variable to make it null
if [ -z "$name" ]; then
    echo "Name is null"
else
    echo "Name is not null"
fi

