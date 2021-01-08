const express = require("express");
const app = express();
const port = 3000;

app.get("/", (req, res) => {
  res.send("Hello! Hello! Hello!");
});

app.get("/pot", (req, res) => {
  res.status(418).send("418, I'm a teapot");
});

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
});
