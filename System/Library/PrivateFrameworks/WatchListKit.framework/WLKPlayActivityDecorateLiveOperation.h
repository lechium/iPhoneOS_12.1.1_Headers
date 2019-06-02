/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString, NSDictionary;

@interface WLKPlayActivityDecorateLiveOperation : WLKNetworkRequestOperation {

	NSString* _channelID;
	NSString* _serviceID;
	NSDictionary* _scheduleDictionary;

}

@property (nonatomic,copy,readonly) NSString * channelID;                           //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID;                           //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scheduleDictionary;              //@synthesize scheduleDictionary=_scheduleDictionary - In the implementation block
-(void)didFinish;
-(NSString *)channelID;
-(id)responseProcessor;
-(id)initWithChannelID:(id)arg1 serviceID:(id)arg2 ;
-(NSDictionary *)scheduleDictionary;
-(NSString *)serviceID;
@end

