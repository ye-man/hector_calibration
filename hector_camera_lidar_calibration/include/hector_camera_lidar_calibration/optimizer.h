#ifndef OPTIMIZER_H
#define OPTIMIZER_H

#include <ros/ros.h>

#include <hector_camera_lidar_calibration/data_collector.h>
#include <hector_camera_lidar_calibration/mutual_information_error.h>

#include <ceres/ceres.h>

namespace hector_calibration {
namespace camera_lidar_calibration {

class Optimizer {
public:
  Optimizer();
  void runOptimization(const std::vector<hector_calibration_msgs::CameraLidarCalibrationData> &data);
private:
  camera_model::CameraModelLoader camera_model_loader_;

  // Parameters
  int bin_fraction_;
};

}
}

#endif
