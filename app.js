const express = require("express");
const cors = require("cors");
const drawValuesCalculator = require("./drawValuesCalculator");
const app = express();
const port = process.env.PORT || 3000;

app.use(express.json());
app.use(cors());

app.get("/", (req, res) => {
  res.send("Hello! Hello! Hello!");
});

app.listen(port, () => {
  console.log(`Running at http://localhost:${port}`);
});

app.post("/", function (req, res) {
  res.setHeader("Content-Type", "application/json");
  res.send(drawValuesCalculator.fnc(req.body.x, req.body.y, req.body.z));
});
