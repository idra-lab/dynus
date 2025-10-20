build: 
	docker build -t dynus:1 .

run-sim:
	xhost + && docker run  -it \
				--gpus all \
				--env="NVIDIA_DRIVER_CAPABILITIES=all" \
				--privileged \
				-e DISPLAY=${DISPLAY} \
				--network=host \
				--env="DISPLAY" \
				--env="QT_X11_NO_MITSHM=1" \
				--volume=${PWD}/gurobi.lic:/opt/gurobi/gurobi.lic:ro \
				--rm dynus:1

# error solving run


run-sim-gui:
	@echo "Temporarily allowing local container connections to the X server..."
	xhost +local:docker
	@echo "Starting DYNUS simulation with GUI forwarding enabled..."
	docker run --rm -it \
		--name dynus_sim_gui \
		--net=host \
		-e DISPLAY=${DISPLAY} \
		-v /tmp/.X11-unix:/tmp/.X11-unix:rw \
		dynus:1
	@echo "Restoring default X server access control..."
	-xhost -local:docker
