/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNQueueingStrategy.h>

@class NSString;

@interface _CNBoundedQueueingStrategy : NSObject <CNQueueingStrategy> {

	unsigned long long _capacity;
	/*^block*/id _overflowHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

