#include <rclcpp/rclcpp.hpp>

class HelloNode : public rclcpp::Node {
public:
  HelloNode() : Node("hello_node") {
    RCLCPP_INFO(this->get_logger(), "Hello from Build Farm node!");
  }
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HelloNode>());
  rclcpp::shutdown();
  return 0;
}
