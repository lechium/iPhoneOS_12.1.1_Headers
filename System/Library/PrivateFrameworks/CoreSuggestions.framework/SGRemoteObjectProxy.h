/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGDSuggestManagerAllProtocol.h>

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {

	SGDaemonConnection* _connection;
	BOOL _queuesRequestsIfBusy;

}
-(id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end

