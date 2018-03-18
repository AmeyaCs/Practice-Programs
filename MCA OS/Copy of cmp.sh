#! /bin/bash
echo "enter the age="
read age


if [ $age -gt 0 ] 
  then 
      if [ $age -lt 18 ] 
      then 
        echo "Person is a minor"
      else
        echo "Person is a major"
      fi
   else
      echo "Age can not be less than 0. Please try again!"
fi
 
