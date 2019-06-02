/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester {

	BOOL _cancelled;
	NSMutableArray* _waiting;
	NSMutableSet* _running;
	NSMutableArray* _errors;

}
+(unsigned char)tileProviderIdentifier;
+(unsigned)registerOverlay:(id)arg1 ;
+(void)unregisterOverlay:(unsigned)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)_doWorkOrFinish;
-(void)dealloc;
-(BOOL)isRunning;
-(void)cancel;
-(void)start;
-(void)_cleanup;
@end

