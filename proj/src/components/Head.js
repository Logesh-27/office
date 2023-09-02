function Head() {
    let a='welcome'
    let b='to'
    let c='React'
    return(

        <div style={{backgroundColor:'red', color:'white'}} className="head">
            {a}{b}{c}
           <p> {b===0?console.log("welcome"):console.log("thank you")}</p>
        </div>
    );
}
export default Head;