#include <linux/module.h>

unsigned int is_fod = 0;

MODULE_PARM_DESC(is_fod, "Activate FOD fix");
module_param_named(is_fod, is_fod, uint, 0644);

unsigned int remove_op_capacity = 0;

MODULE_PARM_DESC(is_custombatt, "Remove battery capacity limit");
module_param_named(is_custombatt, remove_op_capacity, uint, 0444);
