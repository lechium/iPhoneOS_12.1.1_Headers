/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFUtilities : NSObject
+(BOOL)runningUnderDebugger;
+(BOOL)didStopInDebugger;
+(BOOL)hasInternalPhotosDiagnosticsCapability;
+(void)getSystemVersionMajor:(unsigned*)arg1 systemVersionMinor:(unsigned*)arg2 systemVersionBugFixRev:(unsigned*)arg3 ;
+(BOOL)isOnACPower:(double*)arg1 ;
+(BOOL)hasEnabledManagedUserDefault:(id)arg1 ;
@end

