#ifndef __GET_PKL_DATA___H
#define __GET_PKL_DATA___H

#include <pybind11/embed.h>
#include <pybind11/stl.h>
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/pytypes.h>
#include <string>
namespace py = pybind11;

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <vector>

#include <dirent.h>
#include <stdio.h>
#include <algorithm>
#include <iostream>

std::vector<std::string> getFiles(std::string src_dir);

py::dict getPklData(std::string fliename);

pcl::PointCloud<pcl::PointXYZI> toPclPointCloud(pybind11::array_t<float> input);

cv::Mat toCvMatImage(py::bytes input);

#endif //__GET_PKL_DATA___H