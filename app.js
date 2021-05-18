const express = require("express");
const cors = require("cors");
const CalculateTriangulation = require("./calculator/drawValuesCalculator");
const app = express();
const port = process.env.PORT || 7777;

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
  res.send(
    CalculateTriangulation.CalculateTriangulation(
      Number(req.body.N),
      Number(req.body.H),
      Number(req.body.R)
    )
  );
});
