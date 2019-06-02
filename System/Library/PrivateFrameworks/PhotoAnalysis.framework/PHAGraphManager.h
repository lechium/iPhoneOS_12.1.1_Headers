/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/PFMulticasterDelegate.h>
#import <libobjc.A.dylib/PFWeakContainerNilNotificationDelegate.h>

@class PGGraphUpdateManager, NSMutableSet, PFSerialQueue, PGManager, PFWeakContainer, PHAManager;

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PFWeakContainerNilNotificationDelegate> {

	PFDirectMessagingMulticaster* _clientMulticaster;
	PGGraphUpdateManager* _updateManager;
	NSMutableSet* _clientsWantingUpdates;
	BOOL _rebuildInProgress;
	PFSerialQueue* _serializer;
	PGManager* _graphManager;
	PFWeakContainer* _graphMonitor;
	PHAManager* _photoAnalysisManager;

}

@property (nonatomic,retain) PHAManager * photoAnalysisManager;              //@synthesize photoAnalysisManager=_photoAnalysisManager - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(id)loadGraph;
-(void)unloadGraph;
-(void)shutdown;
-(void)performFullRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(PHAManager *)photoAnalysisManager;
-(id)registerGraphClient:(id)arg1 ;
-(void)unregisterGraphClient:(id)arg1 ;
-(void)setPhotoAnalysisManager:(PHAManager *)arg1 ;
-(BOOL)isGraphLoaded;
-(BOOL)graphNeedsRebuild;
-(void)_startListeningWithClient:(id)arg1 ;
-(void)_stopListeningWithClient:(id)arg1 ;
-(void)_graphBecameReady:(id)arg1 ;
-(void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(/*^block*/id)arg2 ;
-(void)weakReferenceBecameNil:(id)arg1 ;
-(void)dealloc;
@end

