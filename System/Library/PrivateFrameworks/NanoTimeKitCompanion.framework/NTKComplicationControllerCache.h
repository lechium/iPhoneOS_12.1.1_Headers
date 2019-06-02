/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NSMutableDictionary, NSMapTable, NTKFaceCollection, NSString;

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver> {

	NSMutableDictionary* _controllers;
	NSMutableDictionary* _controllersToOwningFace;
	NSMapTable* _faceToLegacyControllers;
	NTKFaceCollection* _libraryCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setLibraryCollection:(id)arg1 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)_purge;
-(void)_addComplicationsForFace:(id)arg1 ;
-(void)_removeComplicationsForFace:(id)arg1 ;
-(void)_updateComplicationsForFace:(id)arg1 ;
-(id)controllerForComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 create:(/*^block*/id)arg4 ;
-(id)legacyControllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3 create:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
@end

