function fnc(x, y, z) {
  const drawValues = {
    // prettier-ignore
    vertices: [
      //front
      //0
      0, 0, 0,
      //1
      x, 0, 0,
      //2
      x, y, 0,
      //3
      0, y, 0,
      //back
      //4
      0, 0, z,
      //5
      0, y, z,
      //6
      x, y, z,
      //7
      x, 0, z,
    ],
    // prettier-ignore
    indices: [
      //front
      2, 1, 0,
      0, 3, 2,
      //bottom
      4, 0, 1,
      1, 7, 4,
      // //top
      6, 2, 3,
      3, 5, 6,
      //left-side
      3, 0, 4,
      4, 5, 3,
      // //right-side
      6, 7, 1,
      1, 2, 6,
      // //back
      5, 4, 7,
      7, 6, 5
    ],
    camera: {
      x: 9 * x,
      y: 3 * y,
      z: 2 * z,
    },
  };
  return drawValues;
}
exports.fnc = fnc;
