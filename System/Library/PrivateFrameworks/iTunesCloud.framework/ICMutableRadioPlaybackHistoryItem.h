/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRadioPlaybackHistoryItem.h>

@class NSDate, NSNumber, NSDictionary;

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * pauseTime; 
@property (nonatomic,copy) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy) NSDate * skipDate; 
@property (assign,nonatomic) long long storeIdentifier; 
-(void)setPauseTime:(NSNumber *)arg1 ;
-(void)setServerTrackInfo:(NSDictionary *)arg1 ;
-(void)setSkipDate:(NSDate *)arg1 ;
-(void)setStoreIdentifier:(long long)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

