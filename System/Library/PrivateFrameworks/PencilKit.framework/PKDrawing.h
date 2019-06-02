/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHQueryDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSMutableArray, NSArray, NSUUID, PKVectorTimestamp, CHRecognitionSession, NSMapTable, PKVisualizationManager, NSOrderedSet, NSString;

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying> {

	long long _orientation;
	CGRect _bounds;
	NSMutableOrderedSet* _strokes;
	NSMutableArray* _visibleStrokes;
	BOOL _recognitionEnabled;
	NSArray* _forcedRecognitionLocales;
	NSUUID* _uuid;
	NSUUID* _replicaUUID;
	PKVectorTimestamp* _version;
	CHRecognitionSession* _recognitionSession;
	NSMapTable* _ongoingQueries;
	PKVisualizationManager* _visualizationManager;
	PKStrokeID _orientationVersion;
	PKStrokeID _boundsVersion;
	CGRect _strokeBounds;

}

@property (setter=_setUUID:,nonatomic,retain) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * replicaUUID;                                     //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,retain) PKVectorTimestamp * version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long imageOrientation; 
@property (assign,nonatomic) PKStrokeID orientationVersion;                              //@synthesize orientationVersion=_orientationVersion - In the implementation block
@property (assign,nonatomic) PKStrokeID boundsVersion;                                   //@synthesize boundsVersion=_boundsVersion - In the implementation block
@property (nonatomic,retain) CHRecognitionSession * recognitionSession;                  //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (nonatomic,retain) NSMapTable * ongoingQueries;                                //@synthesize ongoingQueries=_ongoingQueries - In the implementation block
@property (nonatomic,retain) PKVisualizationManager * visualizationManager;              //@synthesize visualizationManager=_visualizationManager - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * strokes;                                   //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visibleStrokes; 
@property (assign,nonatomic) CGRect bounds;                                              //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGRect strokeBounds;                                      //@synthesize strokeBounds=_strokeBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sortStrokes:(id)arg1 ;
+(CGAffineTransform)orientationTransform:(long long)arg1 size:(CGSize)arg2 ;
+(id)_enabledLocales;
+(id)drawingWithData:(id)arg1 ;
+(id)_drawingWithUnzippedData:(id)arg1 ;
+(CGSize)defaultPixelSize;
+(CGSize)defaultSize;
-(id)initWithData:(id)arg1 version:(unsigned)arg2 ;
-(void)setStrokeIDForInsertion:(id)arg1 ;
-(NSMutableArray *)visibleStrokes;
-(unsigned long long)mergeWithDrawing:(id)arg1 ;
-(void)takeOrientationFrom:(id)arg1 ;
-(id)visibleStrokeForInsertingStroke:(id)arg1 ;
-(void)addNewStroke:(id)arg1 ;
-(CGRect)strokeBounds;
-(PKVisualizationManager *)visualizationManager;
-(CHRecognitionSession *)recognitionSession;
-(id)strokesIntersectedByPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 onscreenVisibleStrokes:(id)arg3 ;
-(id)strokeForIdentifier:(id)arg1 ;
-(void)queryDidUpdateResult:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2 ;
-(PKStrokeID)orientationVersion;
-(PKStrokeID)boundsVersion;
-(void)_teardownRecognitionObjects;
-(CGRect)calculateStrokeBounds;
-(NSUUID *)replicaUUID;
-(PKStrokeID)newStrokeIDGreaterThan:(PKStrokeID)arg1 ;
-(id)visibleStrokeForInsertingStroke:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(PKStrokeID)strokeIDForNewStroke;
-(void)invalidateStrokeBounds;
-(void)setNeedsRecognitionUpdate;
-(id)copyAndAddStroke:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(id)setStroke:(id)arg1 hidden:(BOOL)arg2 transform:(CGAffineTransform)arg3 ;
-(id)setStroke:(id)arg1 hidden:(BOOL)arg2 ink:(id)arg3 transform:(CGAffineTransform)arg4 ;
-(PKStrokeID)strokeVersionForUpdatedStroke:(id)arg1 ;
-(void)willMergeWithDrawing:(id)arg1 ;
-(void)didMergeWithDrawing:(id)arg1 ;
-(void)sortStrokes;
-(id)strokesIntersectedByPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 minThreshold:(double)arg3 transform:(CGAffineTransform)arg4 onscreenVisibleStrokes:(id)arg5 ;
-(void)_updateRecognitionSession;
-(BOOL)recognitionEnabled;
-(void)setRecognitionSession:(CHRecognitionSession *)arg1 ;
-(void)setVisualizationManager:(PKVisualizationManager *)arg1 ;
-(void)setOngoingQueries:(NSMapTable *)arg1 ;
-(id)forcedRecognitionLocales;
-(id)indexableContent;
-(NSMapTable *)ongoingQueries;
-(BOOL*)_newAsciiBitfield;
-(id)serializeTransiently;
-(id)mutableStrokes;
-(id)insertNewTestStroke;
-(id)addNewGeneratedStroke:(id)arg1 ;
-(id)setStroke:(id)arg1 hidden:(BOOL)arg2 ;
-(id)setStroke:(id)arg1 hidden:(BOOL)arg2 ink:(id)arg3 ;
-(id)setStroke:(id)arg1 applyTransform:(CGAffineTransform)arg2 ;
-(CGAffineTransform)orientationTransform;
-(id)CHDrawing;
-(void)setRecognitionEnabled:(BOOL)arg1 ;
-(void)setForcedRecognitionLocales:(id)arg1 ;
-(void)cancelOngoingRecognitionRequests;
-(void)performSearchQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_ascii;
-(id)strokeProviderSnapshot;
-(id)dataRepresentationForStrokeProviderVersion:(id)arg1 ;
-(id)strokeProviderVersionFromData:(id)arg1 ;
-(id)dataRepresentationForStrokeIdentifier:(id)arg1 ;
-(id)strokeIdentifierFromData:(id)arg1 ;
-(void)setOrientationVersion:(PKStrokeID)arg1 ;
-(void)setBoundsVersion:(PKStrokeID)arg1 ;
-(id)initWithLegacyData:(id)arg1 version:(unsigned)arg2 ;
-(id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned*)arg2 ;
-(id)initWithArchive:(const Drawing*)arg1 version:(unsigned)arg2 ;
-(id)initWithLegacyArchive:(const Drawing*)arg1 version:(unsigned)arg2 ;
-(unsigned)saveToArchive:(Drawing*)arg1 withPathData:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(id)serializeWithPathData:(BOOL)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(id)serialize;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)bounds;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(long long)imageOrientation;
-(void)setVersion:(PKVectorTimestamp *)arg1 ;
-(PKVectorTimestamp *)version;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NSOrderedSet *)strokes;
@end

