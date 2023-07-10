/**
 * @param {number} millis
 */
async function sleep(millis) {
    const time = await new Promise((resolve, reject) => {
        setTimeout(resolve, millis)
    })
    return time;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */