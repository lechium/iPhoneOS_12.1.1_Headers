/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest {

	NSString* _channelID;
	NSString* _bundleID;
	NSString* _externalID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(NSString *)externalID;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
@end

