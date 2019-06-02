/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_unique_connection_request.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_path_evaluator;
@class NSObject, NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> userParameters;
	char service[436];
	unsigned long long sequenceNumber;
	unsigned long long uniqueID;
	unsigned char uuid[16];
	NWConcrete_nw_connection* connection;
	NSObject*<OS_nw_path_evaluator> pathEvaluator;
	/*^block*/id requestCompletionBlock;
	unsigned isIncoming : 1;
	unsigned isPending : 1;
	unsigned pendingRequestAccepted : 1;
	unsigned isWaitingForListenerReady : 1;
	unsigned isWaitingForActiveConnection : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

