docker build -t raghavendranataraj/netchasm:$SHA -t raghavendranataraj/netchasm:latest -f Dockerfile .
docker push raghavendranataraj/netchasm:latest
docker push raghavendranataraj/netchasm:$SHA
