/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject;

@interface RTDKKnowledgeStore : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)executeQuery:(id)arg1 streamType:(long long)arg2 offset:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)init;
-(void)reset;
-(void)resume;
@end
