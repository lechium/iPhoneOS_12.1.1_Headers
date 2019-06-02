/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCGamepad.h>
#import <libobjc.A.dylib/_GCSnapshot.h>

@class NSData, GCMotion, NSString;

@interface _GCGamepadSnapshot : _GCGamepad <_GCSnapshot> {

	NSData* _snapshotData;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * snapshotData;                   //@synthesize snapshotData=_snapshotData - In the implementation block
-(id)motion;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)set_motion:(id)arg1 ;
-(id)initWithSnapshotData:(id)arg1 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(NSData *)snapshotData;
@end

