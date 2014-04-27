var context = document.getElementById("canvas").getContext("2d");

var polarData = [
    {
        value : 30,
        color: "#D97041"
    },
    {
        value : 90,
        color: "#C7604C"
    },
    {
        value : 24,
        color: "#21323D"
    },
    {
        value : 58,
        color: "#9D9B7F"
    },
    {
        value : 82,
        color: "#7D4F6D"
    },
    {
        value : 8,
        color: "#584A5E"
    }
]

var polarArea = new Chart(context).PolarArea(polarData);