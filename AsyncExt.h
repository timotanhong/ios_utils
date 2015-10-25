

@interface AsyncExt : NSObject


typedef BOOL (^work_ret_bool_stop)(void);

+(void) dispath_iterate:(size_t)a_iterations  interval_seconds:(int64_t) interval_seconds work:(work_ret_bool_stop )work;


@end
