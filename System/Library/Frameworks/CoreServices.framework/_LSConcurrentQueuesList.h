/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _LSConcurrentQueuesList : NSObject {

	NSMutableArray* _identifiers;
	NSMutableArray* _queues;

}
-(id)initWithWidth:(long long)arg1 ;
-(id)getQueueAndIndexForIdentifier:(id)arg1 outIndex:(unsigned long long*)arg2 ;
-(void)addIdentifier:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeIdentifier:(id)arg1 fromIndex:(unsigned long long)arg2 ;
@end

