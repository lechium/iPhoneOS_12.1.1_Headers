/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface PLCoreDuetEvent : NSObject {

	unsigned char _updateType;
	NSString* _bundleID;
	NSString* _processName;
	NSDictionary* _childBundleIDToWeight;
	NSArray* _eventIntervals;

}

@property (retain) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) unsigned char updateType;                          //@synthesize updateType=_updateType - In the implementation block
@property (retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (retain) NSDictionary * childBundleIDToWeight;              //@synthesize childBundleIDToWeight=_childBundleIDToWeight - In the implementation block
@property (retain) NSArray * eventIntervals;                          //@synthesize eventIntervals=_eventIntervals - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setChildBundleIDToWeight:(NSDictionary *)arg1 ;
-(NSDictionary *)childBundleIDToWeight;
-(void)setEventIntervals:(NSArray *)arg1 ;
-(NSArray *)eventIntervals;
-(unsigned char)updateType;
-(void)setUpdateType:(unsigned char)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(NSString *)processName;
@end
