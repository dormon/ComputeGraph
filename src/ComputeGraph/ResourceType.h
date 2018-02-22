#pragma once

#include <ComputeGraph/Fwd.h>

class ComputeGraph::ResourceType {
  public:
  virtual bool equal(std::shared_ptr<ResourceType> const& other) const = 0;
};
