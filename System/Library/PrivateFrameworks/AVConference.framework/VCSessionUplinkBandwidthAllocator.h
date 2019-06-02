/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@class VCSessionBandwidthAllocationTable, NSDictionary;

@interface VCSessionUplinkBandwidthAllocator : VCObject {

	VCSessionBandwidthAllocationTable* _table;
	NSDictionary* _currentTable;
	BOOL _videoEnabled;
	BOOL _redundancyEnabled;

}

@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                        //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isRedundancyEnabled,nonatomic) BOOL redundancyEnabled; 
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)_assignCurrentTables;
-(BOOL)_isAvailableStreamConfiguration:(id)arg1 ;
-(id)_audioEntriesForTargetBitrate:(unsigned)arg1 ;
-(id)_videoEntriesForTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2 ;
-(void)setRedundancyEnabled:(BOOL)arg1 ;
-(BOOL)isRedundancyEnabled;
-(BOOL)enableVideoStream:(BOOL)arg1 streamID:(unsigned short)arg2 ;
-(id)audioStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoStreamIDsforTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(id)audioRepairStreamIDsforTargetBitrate:(unsigned)arg1 ;
-(id)videoRepairStreamIDsforTargetBitrate:(unsigned)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 ;
-(id)videoRepairStreamIDsForStreamIDs;
-(id)audioRepairStreamIDsForStreamIDs;
-(id)init;
-(void)dealloc;
@end
