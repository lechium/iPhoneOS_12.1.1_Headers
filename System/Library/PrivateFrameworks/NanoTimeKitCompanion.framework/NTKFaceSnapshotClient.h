/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface NTKFaceSnapshotClient : NSObject {

	NSXPCConnection* _connection;
	BOOL _registrationNeeded;

}
+(id)sharedInstance;
-(void)_handleConnectionInterrupted;
-(void)_registerIfNeeded;
-(void)_handleCustomMonogramChangedNotification;
-(void)_handleSignificantLocationChangeNotification;
-(void)_handleActiveDeviceChangedNotification;
-(void)_setupConnection;
-(void)_updateAllSnapshots;
-(void)createFaceForPerformanceTesting:(long long)arg1 ;
-(void)requestSnapshotOfFace:(id)arg1 ;
-(void)performAfterCompletingCurrentlyPendingSnapshots:(/*^block*/id)arg1 ;
-(void)snapshotFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)synchronouslyUpdateAllSnapshots;
-(void)faceSnapshotChangedForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
