#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/faisal/catkin_ws/src/geometry-hydro-devel/tf"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/faisal/catkin_ws/install/lib/python2.7/dist-packages:/home/faisal/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/faisal/catkin_ws/build" \
    "/usr/bin/python" \
    "/home/faisal/catkin_ws/src/geometry-hydro-devel/tf/setup.py" \
    build --build-base "/home/faisal/catkin_ws/build/geometry-hydro-devel/tf" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/faisal/catkin_ws/install" --install-scripts="/home/faisal/catkin_ws/install/bin"
