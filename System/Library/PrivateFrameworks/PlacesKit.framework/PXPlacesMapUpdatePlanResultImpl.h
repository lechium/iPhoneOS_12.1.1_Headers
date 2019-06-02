/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapUpdatePlanResult.h>

@class NSSet, NSMutableSet, NSString;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult> {

	NSMutableSet* _annotationsToAddImmediately;
	NSMutableSet* _annotationsToRemoveImmediately;
	NSMutableSet* _annotationsToRemoveAfterAnimationHasStarted;
	NSMutableSet* _annotationsToRemoveAfterAnimationHasEnded;
	NSMutableSet* _annotationsToRedraw;
	NSMutableSet* _annotationsWithUpdatedIndex;
	NSMutableSet* _overlaysToAddImmediately;
	NSMutableSet* _overlaysToRemoveImmediately;

}

@property (readonly) NSMutableSet * annotationsToAddImmediately;                              //@synthesize annotationsToAddImmediately=_annotationsToAddImmediately - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveImmediately;                           //@synthesize annotationsToRemoveImmediately=_annotationsToRemoveImmediately - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveAfterAnimationHasStarted;              //@synthesize annotationsToRemoveAfterAnimationHasStarted=_annotationsToRemoveAfterAnimationHasStarted - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveAfterAnimationHasEnded;                //@synthesize annotationsToRemoveAfterAnimationHasEnded=_annotationsToRemoveAfterAnimationHasEnded - In the implementation block
@property (readonly) NSMutableSet * annotationsToRedraw;                                      //@synthesize annotationsToRedraw=_annotationsToRedraw - In the implementation block
@property (readonly) NSMutableSet * annotationsWithUpdatedIndex;                              //@synthesize annotationsWithUpdatedIndex=_annotationsWithUpdatedIndex - In the implementation block
@property (readonly) NSMutableSet * overlaysToAddImmediately;                                 //@synthesize overlaysToAddImmediately=_overlaysToAddImmediately - In the implementation block
@property (readonly) NSMutableSet * overlaysToRemoveImmediately;                              //@synthesize overlaysToRemoveImmediately=_overlaysToRemoveImmediately - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)annotationsToAddImmediately;
-(NSMutableSet *)annotationsToRemoveImmediately;
-(NSMutableSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSMutableSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSMutableSet *)annotationsWithUpdatedIndex;
-(NSMutableSet *)overlaysToAddImmediately;
-(NSMutableSet *)overlaysToRemoveImmediately;
-(NSMutableSet *)annotationsToRedraw;
-(id)init;
-(NSString *)description;
@end

