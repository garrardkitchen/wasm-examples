const express = require('express')
const server = express()

server.use(express.static('public'))

const port = process.env.port ?? 8000;

server.listen(port, function() {
  console.log('server listening on port ' + port)
})