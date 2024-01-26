/**
 * @param {number[]} distance
 * @param {number} start
 * @param {number} destination
 * @return {number}
 */
var distanceBetweenBusStops = function (distance, start, destination) {
    const s = distance.reduce((a, b) => a + b, 0);
    let a = 0;
    const n = distance.length;
    while (start != destination) {
        a += distance[start];
        start = (start + 1) % n;
    }
    return Math.min(a, s - a);
};
