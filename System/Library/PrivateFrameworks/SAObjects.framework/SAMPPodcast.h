/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPPodcast : SAMPMediaItem

@property (nonatomic,copy) NSString * seriesId; 
@property (nonatomic,copy) NSString * seriesTitle; 
+(id)podcastWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)podcast;
-(id)encodedClassName;
-(NSString *)seriesId;
-(void)setSeriesId:(NSString *)arg1 ;
-(NSString *)seriesTitle;
-(void)setSeriesTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
