/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStreamMultiwayConfig.h>

@class NSMutableSet, NSMutableArray, NSSet, NSArray;

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig {

	long long _resolution;
	NSMutableSet* _payloads;
	unsigned _framerate;
	unsigned long long _keyFrameInterval;
	NSMutableArray* _subStreamConfigs;

}

@property (assign,nonatomic) long long resolution;                             //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) unsigned framerate;                               //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,readonly) NSSet * payloads;                               //@synthesize payloads=_payloads - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (nonatomic,readonly) NSArray * subStreamConfigs;                     //@synthesize subStreamConfigs=_subStreamConfigs - In the implementation block
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(NSSet *)payloads;
-(NSArray *)subStreamConfigs;
-(id)streamIds;
-(void)addPayload:(int)arg1 ;
-(void)addSubStreamConfig:(id)arg1 ;
-(long long)resolution;
-(void)setResolution:(long long)arg1 ;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
@end

