/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCFeedGroupInsertionDescriptor;
@class NSString, NSSet;

@interface FCEditorialFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCFeedGroupInsertionDescriptor> _insertionDescriptor;

}

@property (nonatomic,copy,readonly) id<FCFeedGroupInsertionDescriptor> insertionDescriptor;              //@synthesize insertionDescriptor=_insertionDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
+(id)editorialFeedTransformationWithContext:(id)arg1 ;
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(long long)requiredForYouContentTypes;
-(id)initWithInsertionDescriptor:(id)arg1 ;
-(id<FCFeedGroupInsertionDescriptor>)insertionDescriptor;
-(id)init;
@end

