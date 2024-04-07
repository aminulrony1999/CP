// function calculateMoney(ticketSale)
// {
//     if(ticketSale < 0)
//     return "Invalid Input";
//     return (ticketSale * 120) - (500 + (8 * 50));
// }



// function checkName(name) {
//   if (typeof name !== "string") return "invalid";
//   name = name.toUpperCase();
//   const x = name.length - 1;
//   if (
//     name[x] == "A" ||
//     name[x] == "Y" ||
//     name[x] == "I" ||
//     name[x] == "E" ||
//     name[x] == "O" ||
//     name[x] == "U" ||
//     name[x] == "W"
//   )
//     return "Good Name";
//   else return "Bad Name";
// }




// function deleteInvalids(array){
//     if(Array.isArray(array)){
//         const newArray = array.filter(arrayElement => typeof arrayElement === "number" && arrayElement)
//         return newArray;
//     }
//     else
//     return "Invalid array";
// }



// function password(obj){
//     const year = obj.birthYear.toString();
//     if(Object.keys(obj).length != 3 || year.length != 4)
//     return "invalid";
//     const pass = obj.siteName.charAt(0).toUpperCase() + obj.siteName.slice(1)+"#"+obj.name+"@"+obj.birthYear;
//     return pass;
// }


// function monthlySavings(arr , livingCost){
//     if(!Array.isArray(arr) || typeof livingCost != "number")
//     return "invalid input";
//     const income = arr.map(amount =>{
//         if(amount >= 3000)
//         {
//             return amount - (amount * (20/100.0));
//         }
//         else
//         return amount;
//     })
//     var sum = 0;
//     for(let i = 0; i < income.length; ++i)
//     sum += income[i];
//     const savings = sum - livingCost;
//     if(savings >= 0)
//     return savings;
//     else
//     return "earn more";
// }
while(true)
{
    let localTime = new Date().getSeconds();
    console.log(localTime);
}