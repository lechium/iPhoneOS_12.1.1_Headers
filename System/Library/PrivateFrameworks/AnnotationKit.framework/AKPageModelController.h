/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSMutableOrderedSet, NSMutableSet, AKCropAnnotation, AKInkAnnotation, AKStatistics, NSArray, NSSet;

@interface AKPageModelController : NSObject {

	NSMutableOrderedSet* _mutableAnnotations;
	NSMutableSet* _mutableSelectedAnnotations;
	id _representedObject;
	AKCropAnnotation* _cropAnnotation;
	AKInkAnnotation* _inkCanvasAnnotation;
	AKStatistics* _statisticsLogger;
	CGRect _appliedCropRect;

}

@property (retain) AKCropAnnotation * cropAnnotation;                             //@synthesize cropAnnotation=_cropAnnotation - In the implementation block
@property (retain) AKInkAnnotation * inkCanvasAnnotation;                         //@synthesize inkCanvasAnnotation=_inkCanvasAnnotation - In the implementation block
@property (assign,nonatomic,__weak) AKStatistics * statisticsLogger;              //@synthesize statisticsLogger=_statisticsLogger - In the implementation block
@property (__weak) id representedObject;                                          //@synthesize representedObject=_representedObject - In the implementation block
@property (readonly) NSArray * annotations; 
@property (readonly) NSSet * selectedAnnotations; 
@property (assign) CGRect appliedCropRect;                                        //@synthesize appliedCropRect=_appliedCropRect - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSArray *)annotations;
-(NSSet *)selectedAnnotations;
-(void)setSelectedAnnotations:(NSSet *)arg1 ;
-(BOOL)containsAnnotation:(id)arg1 ;
-(AKStatistics *)statisticsLogger;
-(AKInkAnnotation *)inkCanvasAnnotation;
-(void)setInkCanvasAnnotationOneTime:(id)arg1 ;
-(id)selectionStateForUndo;
-(void)restoreSelectionStateForUndo:(id)arg1 ;
-(void)setStatisticsLogger:(AKStatistics *)arg1 ;
-(AKCropAnnotation *)cropAnnotation;
-(void)removeCropToolAnnotation;
-(BOOL)hasMaskBorderAnnotation;
-(void)selectAllAnnotations;
-(id)archivableRepresentation;
-(id)initWithArchivableRepresentation:(id)arg1 ;
-(void)selectAnnotation:(id)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
-(void)setInkCanvasAnnotation:(AKInkAnnotation *)arg1 ;
-(void)_enableEditObservationForAnnotationIfNew:(id)arg1 ;
-(void)_logAnnotationAdded:(id)arg1 ;
-(void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2 ;
-(void)removeAnnotationsAtIndexes:(id)arg1 ;
-(void)removeSelectedAnnotationsObject:(id)arg1 ;
-(void)removeSelectedAnnotations:(id)arg1 ;
-(void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)_postSelectedAnnotationsChangedNotification;
-(void)addSelectedAnnotationsObject:(id)arg1 ;
-(void)addSelectedAnnotations:(id)arg1 ;
-(void)insertAnnotations:(id)arg1 atIndexes:(id)arg2 ;
-(void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)setCropAnnotation:(AKCropAnnotation *)arg1 ;
-(void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1 ;
-(void)removeAllAnnotations;
-(void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1 ;
-(void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2 ;
-(void)intersectSelectedAnnotations:(id)arg1 ;
-(void)bringSelectedAnnotationsForward;
-(void)bringSelectedAnnotationsToFront;
-(void)sendSelectedAnnotationsBackward;
-(void)sendSelectedAnnotationsToBack;
-(void)addCropToolAnnotation;
-(CGRect)appliedCropRect;
-(void)setAppliedCropRect:(CGRect)arg1 ;
-(id)init;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
@end
