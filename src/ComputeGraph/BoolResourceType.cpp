#include <ComputeGraph/BoolResourceType.h>

using namespace ComputeGraph;

BoolResourceType::BoolResourceType() : ResourceType() {}

bool BoolResourceType::equal(std::shared_ptr<ResourceType> const& other) const {
  return std::dynamic_pointer_cast<BoolResourceType>(other) != nullptr;
}
