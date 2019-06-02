/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol AFQueueDelegate;
@class NSMutableArray;

@interface AFQueue : NSObject <NSFastEnumeration> {

	id<AFQueueDelegate> _delegate;
	NSMutableArray* _objects;

}

@property (getter=_objects,nonatomic,readonly) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) long long count; 
@property (assign,nonatomic,__weak) id<AFQueueDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(id)_objects;
-(void)enqueueObjects:(id)arg1 ;
-(id)frontObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(long long)count;
-(id)description;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id<AFQueueDelegate>)delegate;
@end

