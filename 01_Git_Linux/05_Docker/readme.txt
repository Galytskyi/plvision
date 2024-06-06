########################################## 
#
#  Chat between server and client
#
########################################## 

mkdir server
mkdir client

########################################## 

cd server

touch dockerfile
server.sh

	# docker build .
	# docker tag 3ec438cb2e97 server:v01

docker build -t server:v01 .

	# docker run --rm --name server server:v01
	# docker run -d --rm --name server server:v01
	# docker run -it --rm --name server server:v01 /bin/sh

########################################## 

cd client

touch dockerfile
client.sh

	# docker build .
	# docker tag 3ec438cb2e97 client:v01

docker build -t client:v01 .

	# docker run --rm --name client client:v01
	# docker run -d --rm --name client client:v01
	# docker run -it --rm --name client client:v01 /bin/sh

########################################## 

cd ..

docker network create my_network
docker network inspect my_network

########################################## 

docker container run -it --rm --network my_network --name server server:v01 /bin/sh
docker container run -it --rm --network my_network --name client client:v01 /bin/sh

########################################## 

	#ping server
	#exit

########################################## 


