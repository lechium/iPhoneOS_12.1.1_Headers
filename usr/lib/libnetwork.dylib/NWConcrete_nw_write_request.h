/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_write_request.h>

@protocol OS_dispatch_data, OS_nw_content_context;
@class NSObject, NSString;

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {

	NWConcrete_nw_write_request* next;
	/*^block*/id completion;
	NSObject*<OS_dispatch_data> data;
	NSObject*<OS_nw_content_context> context;
	unsigned long long consumed_bytes;
	double relative_priority;
	unsigned complete : 1;
	unsigned reported : 1;
	unsigned idempotent : 1;
	unsigned write_close : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end
