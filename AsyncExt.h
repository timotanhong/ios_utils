

@interface AsyncExt : NSObject


typedef BOOL (^work_ret_bool_stop)(void);

/*
	// 	example : try 3 time to wait for coming data
    [AsyncExt dispath_iterate:3 interval_seconds:1 work:^BOOL{
    
        if( if_data_ready() )
        {
 			// do handling
            return true; // to stop
        }
        else
        {
            return false;
        }
    }];

*/
+(void) dispath_iterate:(size_t)a_iterations  interval_seconds:(int64_t) interval_seconds work:(work_ret_bool_stop )work;


@end
