/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface AFMyriadRecord : NSObject {

	unsigned char _goodness;
	unsigned char _userConfidence;
	unsigned char _deviceGroup;
	unsigned char _deviceClass;
	unsigned char _tieBreaker;
	BOOL _isMe;
	unsigned short _pHash;
	NSUUID* _deviceID;

}

@property (assign,nonatomic) unsigned char goodness;                    //@synthesize goodness=_goodness - In the implementation block
@property (assign,nonatomic) unsigned char userConfidence;              //@synthesize userConfidence=_userConfidence - In the implementation block
@property (assign,nonatomic) unsigned short pHash;                      //@synthesize pHash=_pHash - In the implementation block
@property (nonatomic,copy) NSUUID * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned char deviceGroup;                 //@synthesize deviceGroup=_deviceGroup - In the implementation block
@property (assign,nonatomic) unsigned char deviceClass;                 //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) unsigned char tieBreaker;                  //@synthesize tieBreaker=_tieBreaker - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                 //@synthesize isMe=_isMe - In the implementation block
-(void)setDeviceClass:(unsigned char)arg1 ;
-(unsigned char)deviceClass;
-(void)setIsMe:(BOOL)arg1 ;
-(BOOL)isMe;
-(BOOL)isSlowdown;
-(id)initWithAudioData:(id)arg1 ;
-(void)adjustByMultiplier:(float)arg1 adding:(int)arg2 ;
-(id)initWithDeviceID:(id)arg1 data:(id)arg2 ;
-(void)generateTiebreaker;
-(void)generateRandomConfidence;
-(BOOL)isATrump;
-(BOOL)isAContinuation;
-(BOOL)isAnEmergency;
-(BOOL)isAnEmergencyHandled;
-(BOOL)isSane;
-(int)slowdownDelay;
-(id)asAdvertisementData;
-(unsigned char)goodness;
-(void)setGoodness:(unsigned char)arg1 ;
-(unsigned char)userConfidence;
-(void)setUserConfidence:(unsigned char)arg1 ;
-(unsigned short)pHash;
-(void)setPHash:(unsigned short)arg1 ;
-(unsigned char)deviceGroup;
-(void)setDeviceGroup:(unsigned char)arg1 ;
-(unsigned char)tieBreaker;
-(void)setTieBreaker:(unsigned char)arg1 ;
-(NSUUID *)deviceID;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(id)init;
-(id)description;
@end
