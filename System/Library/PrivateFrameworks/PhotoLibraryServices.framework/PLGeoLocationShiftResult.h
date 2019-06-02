/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSArray;

@interface PLGeoLocationShiftResult : NSObject {

	NSMutableDictionary* _shiftedLocations;
	NSArray* _shiftedAssetIDs;
	BOOL _encounteredErrors;

}

@property (assign,setter=_setEncounteredErrors:,nonatomic) BOOL encounteredErrors;              //@synthesize encounteredErrors=_encounteredErrors - In the implementation block
@property (nonatomic,readonly) NSArray * assetIDs; 
-(NSArray *)assetIDs;
-(BOOL)hasShiftedLocationForAssetID:(id)arg1 ;
-(CLLocationCoordinate2D)shiftedLocationForAssetID:(id)arg1 ;
-(BOOL)encounteredErrors;
-(id)initWithAssetIDs:(id)arg1 ;
-(void)_setCoordinate:(CGPoint)arg1 ForAssetID:(id)arg2 ;
-(void)_setEncounteredErrors:(BOOL)arg1 ;
-(void)dealloc;
@end

