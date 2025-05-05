#ifndef TASK_H
#define TASK_H

#include <argos3/core/utility/math/vector2.h>

struct STask {
   CVector2 Position; ///< where the task is located
   Real Reward;       ///< the reward received for completing the task
};

struct SAssignment {
   std::vector<bool> px; ///< vector px for stored pose.position.x, each element is x
   std::vector<Real> py; ///< vector py for stored pose.position.y, each element is y
   
   SAssignment(size_t un_tasks) :
      px(un_tasks, 0.0),
      py(un_tasks, 0.0) {}
};

#endif // TASK_H
