/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSNumber * itemIdentifier; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSString * mediaEventType; 
@property (nonatomic,retain) NSString * mediaURL; 
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(NSString *)mediaEventType;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)mediaURL;
-(void)setMediaURL:(NSString *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setMediaEventType:(NSString *)arg1 ;
-(id)init;
@end

