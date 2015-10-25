@implementation AsyncExt



+(void) dispath_iterate:(size_t)num_iteration  interval_seconds:(int64_t) interval_seconds work:(work_ret_bool_stop)work
{
    dispatch_time_t exe_time = dispatch_time(DISPATCH_TIME_NOW, interval_seconds * NSEC_PER_SEC);
	
    size_t __block iterations = num_iteration;

    dispatch_after(exe_time, dispatch_get_main_queue(), ^{
    
    	bool stop = work();
        if( !stop &&  (iterations)>0 )
        {
            [self dispath_iterate:iterations-1 interval_seconds:interval_seconds  work:work];
        }
    });
}

@end
