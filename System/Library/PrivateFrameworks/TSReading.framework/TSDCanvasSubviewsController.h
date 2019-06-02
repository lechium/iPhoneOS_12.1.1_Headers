/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDLayerAndSubviewHosting;
#import <TSReading/TSReading-Structs.h>
@class NSSet, NSDictionary, NSArray, NSMutableArray, TSURetainedPointerKeyDictionary;

@interface TSDCanvasSubviewsController : NSObject {

	NSSet* _repChildViews;
	NSDictionary* _repsByChildView;
	id<TSDLayerAndSubviewHosting> _host;
	NSArray* _alternateLayersForViews;
	BOOL _needsLayout;
	BOOL _hasBeenTornDown;
	NSMutableArray* _subviewLayers;
	TSURetainedPointerKeyDictionary* _repViewControllersByChildView;
	opaque_pthread_mutex_t _mutex;

}

@property (nonatomic,readonly) NSSet * repChildViews;              //@synthesize repChildViews=_repChildViews - In the implementation block
-(void)updateTopLevelLayersForTiling:(id)arg1 ;
-(void)updateViewsFromReps;
-(id)updateAlternateLayersForViews;
-(void)p_recursivelyFindAlternateLayersForRep:(id)arg1 accumulatingLayers:(id)arg2 repsByChildLayer:(id)arg3 ;
-(id)p_topLevelReps;
-(void)p_sortLayers:(id)arg1 ;
-(void)p_recursivelyFindChildViewsForRep:(id)arg1 accumulatingViews:(id)arg2 accumulatingRepsByChildView:(id)arg3 ;
-(void)p_recursivelyFindHostingRepsForRep:(id)arg1 accumulatingHostingReps:(id)arg2 ;
-(void)p_sortSubviews:(id)arg1 ;
-(void)syncPerformBlock:(/*^block*/id)arg1 ;
-(id)initWithLayerAndSubviewHost:(id)arg1 ;
-(void)addSubviews:(id)arg1 ;
-(void)removeSubviews:(id)arg1 ;
-(NSSet *)repChildViews;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)teardown;
@end

