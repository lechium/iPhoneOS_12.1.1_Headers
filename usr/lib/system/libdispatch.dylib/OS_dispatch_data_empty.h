/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <libdispatch.dylib/OS_dispatch_data.h>

@interface OS_dispatch_data_empty : OS_dispatch_data
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)load;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(void)_suspend;
-(void)_activate;
-(void)_resume;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(void)_setContext:(void*)arg1 ;
@end

